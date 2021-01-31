#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n], res[3];
    int min = 10000000;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
            cin >> a[i][j];
    
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
           for (int k = j + 1; k < n; k++)
               if (a[i][j] + a[i][k] + a[j][k] < min) {
                   min = a[i][j] + a[i][k] + a[j][k];
                   res[0] = i;
                   res[1] = j;
                   res[2] = k;
               }

    for (int i = 0; i < 3; i++) 
        cout << res[i] + 1 << ' ';

    return 0;
}