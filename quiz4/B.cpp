#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
            cin >> a[i][j];

    for (int i = 0; i < q; i++){
        int f, s, t;
        cin >> f >> s >> t;
        f--; s--; t--;
        if (a[f][s] and a[f][t] and a[s][t])
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}