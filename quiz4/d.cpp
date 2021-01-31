#include <bits/stdc++.h>

using namespace std;
int n, m;
int used[100000];
vector<int> g[100000];
stack<int> result;


void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++) {
        if (used[g[v][i]] == 0)
            dfs(g[v][i]);
    }
    result.push(v);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
    }

    for (int i = 0; i < n; i++) 
        if (used[i] == 0)
            dfs(i);
    
    while (!result.empty()) {
            cout << result.top() + 1 << ' ';
            result.pop();
        }
    return 0;
}