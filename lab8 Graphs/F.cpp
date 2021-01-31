#include <bits/stdc++.h>

using namespace std;

vector<int> g[1000];
int used[1000];
int n, m;
bool ok = true;

void dfs(int v, int c) {
    used[v] = c;
    for (int i = 0; i < g[v].size(); i++){
        int u = g[v][i];
        if (used[u] == 0)
            dfs(u, 3 - c);
        else if (used[u] == c)
                ok = false;
    }
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
        if (used[i] == 0)
            dfs(i, 1);

    if (ok) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) 
            if (used[i] == 1)
                cout << i + 1 << ' ';
    }
    else 
     cout << "NO";
    
    return 0;
}