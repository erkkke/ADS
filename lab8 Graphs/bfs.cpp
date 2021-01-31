#include <bits/stdc++.h>

using namespace std;

vector<int> g[100];
queue<int> q; 
int used[100];
int d[100];

void bfs(int t) {
    q.push(t);
    d[t] = 0;
    used[t] = true;

    while(!q.empty()) {
        int v = q.front();
        for (int i = 0; i < g[v].size(); i++) {
            int u = g[v][i];
            if (used[u] == false) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
            }
        }
        q.pop();
    }


}

int main() {
    int n, m, t, x, y;
    cin >> n >> m >> t;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    // чекнуть сколько компонентов связанности есть
    // int cnt = 0;
    // for (int i = 0; i < n; i++) {
    //     if(!used[i]) {
    //         bfs(i);
    //         cnt++;
    //     }
    // }
    // cout << cnt;

    bfs(t);

    for (int i = 0; i < n; i++) 
        cout << i + 1 << " - " << d[i] << endl;

    return 0;
}