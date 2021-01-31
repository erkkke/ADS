#include <bits/stdc++.h>
 
using namespace std;

const int N = 500;
char a[N][N];
bool used[N][N];
int n, m;


void dfs(int i, int j) {

    used[i][j] = 1;

    if(i - 1 != 0 && used[i - 1][j] == 0 && a[i - 1][j] == '#')
        dfs(i - 1, j);

    if(i != n && used[i + 1][j] == 0 && a[i + 1][j] == '#')
        dfs(i + 1, j);

    if(j - 1 != 0 && used[i][j - 1] == 0 && a[i][j - 1] == '#')
        dfs(i, j - 1);

    if(j != m && used[i][j + 1] == 0 && a[i][j + 1] == '#')
        dfs(i, j + 1);
} 



int main () {
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
 
    int cnt = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i][j] == '#' && !used[i][j]) {
                cnt++;
                dfs(i, j);
            }
        }
    }
    
    cout << cnt;

    return 0;
}