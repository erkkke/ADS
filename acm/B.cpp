#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1000000];

int main(){
        int n, k;
        cin >> n >> k;
        int c[n];
        int start = 0, b = n - 1;
        int sum = 0;
        for (int i = 0; i < n * k; i ++) {
            cin >> a[i];
            if (i == b && n < 3) {
                b += n;
                sum += a[(start + i) / 2];
                start = i + 1;
            }
        }
        if (n > 2) {
            int r = n * k - 1;
            int l = 0;
            while (l < r) {
                c[0] = a[l];
                for (int i = n - 1; i > 0; i--) {
                    c[i] = a[r];
                    r--;
                }
                sum += c[n / 2];
                for (int i = 0; i < n; i++)
                    cout << c[i] << ' ';
                cout << c[n / 2];
                l++;
                cout << endl;
            }
            
        }

        // cout << sum << endl;
    return 0;
}