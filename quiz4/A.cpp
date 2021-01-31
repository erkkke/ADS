#include <bits/stdc++.h>

using namespace std;

vector<int> g[1000000];
int n, m, used[1000000], cnt = 0, ans[100000];

void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++)
        if (used[g[v][i]] == 0)
            dfs(g[v][i]);
    ans[cnt]++;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 0; i < n; i++)
        if (used[i] == 0) {
            dfs(i);
            cnt++;
        }
        
    int mini = 1000000;
    for (int i = 0; i < cnt; i++) {
        if (mini > ans[i]);
            mini = ans[i];
    }

    cout << mini;
    return 0;
}