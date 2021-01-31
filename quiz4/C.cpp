#include <bits/stdc++.h>
using namespace std;
int used[1000][1000], a[1000][1000], b[1000][1000], cnt = 0;
bool ok = true;

int main() {
    int m, n;
    cin >> m >> n;
    queue<pair<int, int> > q;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
            cin >> a[i][j];

            if (a[i][j] == 2) {
                q.push(make_pair(i, j));
                b[i][j] = 0;
            }
            else if (a[i][j] == 1)
                b[i][j] = -1;
            else 
                b[i][j] = 0;
        }
    
    while (!q.empty()) {
        pair<int, int> v = q.front();
        int x = v.first;
        int y = v.second;

        if (x - 1 >= 0 and a[x - 1][y] == 1 and used[x - 1][y] == 0) {
            q.push(make_pair(x - 1, y));
            b[x - 1][y] = b[x][y] + 1;
        }
        if (x + 1 < n and a[x + 1][y] == 1 and used[x + 1][y] == 0) {
            q.push(make_pair(x + 1, y));
            b[x + 1][y] = b[x][y] + 1;
        }
        if (y - 1 >= 0 and a[x][y - 1] == 1 and used[x][y - 1] == 0) {
            q.push(make_pair(x, y - 1));
            b[x][y - 1] = b[x][y] + 1;
        }
        if (y + 1 < m and a[x][y + 1] == 1 and used[x][y + 1] == 0) {
            q.push(make_pair(x, y + 1));
            b[x][y + 1] = b[x][y] + 1;
        }
        q.pop();
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if (b[i][j] == -1)
                ok = false;
            else if (b[i][j] > cnt)
                cnt = b[i][j];
        }
    
    if (!ok)
        cout << -1;
    else 
        cout << cnt;

    return 0;
}