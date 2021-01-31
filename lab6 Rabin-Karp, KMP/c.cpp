#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s == t) {
            cout << i;
            return 0;
        }
        s = s[n - 1] + s.substr(0, n - 1);
    }
    cout << -1;
    return 0;
}