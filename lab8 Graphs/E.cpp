#include <bits/stdc++.h>
using namespace std;

int used[1000], a[1000][1000];
int n;

void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < n; i++)
        if (a[i][v] > 0 && used[i] == 0)
            dfs(i);
}

int main() {
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] > 0)
                cnt++;
        }
    
    dfs(0);

    bool isTree = true;

    for (int i = 0; i < n; i++)
        if (used[i] == 0)
            isTree = false;

    if (cnt / 2 != n - 1 or !isTree)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}