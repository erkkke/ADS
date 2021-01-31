#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, mini = 1000000000000000;

int main() {
    cin >> n;
    vector<ll> b(n);

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if(i)
            b[i] += b[i - 1];
    }
    
    sort(b.begin(), b.end());
    for (int i = 1; i < n + 1; i++)
        mini = min(b[i] - b[i - 1], mini);

    cout << mini;
    return 0;
}