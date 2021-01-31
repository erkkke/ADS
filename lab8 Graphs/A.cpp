#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    int a[n][n], c[n];
    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++) 
        cin >> c[i];

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            if (a[i][j] == 1 && c[i] != c[j])
                cnt++;
    cout << cnt / 2;
    return 0;
}