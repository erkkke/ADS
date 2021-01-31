#include <bits/stdc++.h>
using namespace std;

int used[1000], a[1000][1000];
int n, v;

void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < n; i++)
        if (a[i][v] == 1 && used[i] == 0)
            dfs(i);
}

int main() {
    cin >> n >> v;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
        cin >> a[i][j];
        
    dfs(v - 1);

    for (int i = 0; i < n; i++)
        if (used[i] != 0)
            cnt++;

    cout << cnt;
    return 0;
}