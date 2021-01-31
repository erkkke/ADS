// топологическая сортировка (задача с врачами)
#include <bits/stdc++.h>

using namespace std;
int n, m, x, y;
int used[100];
vector<int> g[100], result;

void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++) 
        if (used[g[v][i]] == 0)
            dfs(g[v][i]);
    result.push_back(v);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y); // ориентированный граф
    }

    for (int i = 0; i < n; i++) 
        if (used[i] == 0)
            dfs(i);
    
    for (int i = 0; i < n; i++) 
        cout << result[i] + 1 << ' ';
    
    return 0;
}