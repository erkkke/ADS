#include <bits/stdc++.h>

using namespace std;

int n, m, used[1000], cnt = 0;
vector<int> g[1000];

void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++) 
        if (used[g[v][i]] == 0)
            dfs(g[v][i]);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 0; i < n; i++)
        if (used[i] == 0) {
            dfs(i);
            cnt++;
        }

    cout << cnt - 1 << endl;

    return 0;
}