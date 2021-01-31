#include <bits/stdc++.h>

using namespace std;
int n, m;
int used[1000000];
vector<int> g[1000000];
stack<int> result;
bool ok = true;

void dfs(int v, int parent) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++) {
        if (used[g[v][i]] == 0)
            dfs(g[v][i], v);
        else if (used[g[v][i]] == 1 and g[v][i] != parent)
            ok = false;
    }
        
    used[v] = 2;
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
            dfs(i, -1);
    
    if (!ok)
        cout << "No";
    else {
        cout << "Yes" << endl;
        while (!result.empty()) {
            cout << result.top() + 1 << ' ';
            result.pop();
        }
        
    }
    return 0;
}