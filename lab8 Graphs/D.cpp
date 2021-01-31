#include <bits/stdc++.h>
using namespace std;

int n, m, used[1000000], cnt = 0;
vector<int> g[1000000], res[1000000];

void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++)
        if (used[g[v][i]] == 0)
            dfs(g[v][i]);
    res[cnt].push_back(v);
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
        if (used[i] == 0){
            dfs(i);
            cnt++;
        }

    cout << cnt << endl;
    for (int i = 0; i < cnt; i++) {
        cout << res[i].size() << endl;
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] + 1 << ' ';
        cout << endl;
    }
    return 0;
}