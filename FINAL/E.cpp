#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, maxi = -100000000000;
    cin >> n;
    ll x[n], y[n];
    
    for (ll i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        if (i)
            maxi = max(abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]), maxi);
    }

    if (n == 1)
        cout << 0;
    else
        cout << maxi;
    
    return 0;
}