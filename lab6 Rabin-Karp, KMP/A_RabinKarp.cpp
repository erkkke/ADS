#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = (int)1e5 + 5;
int p = 31;
int pw[N], h[N];


int main() {

    string s, t;
    cin >> s;
    cin >> t;
    int n = s.length();
    int m = t.length();

    pw[0] = 1;
    for (int i = 1; i <= n; i++) 
        pw[i] = pw[i-1] * p;
    

    h[0] = 0;
    for (int i = 1; i <= n; i++) 
        h[i] = h[i - 1] + s[i-1] * pw[i-1];
    

    int T = 0;
    for (int i = 0; i < m; i++) 
        T += t[i] * pw[i];
    

    for (int i = 0; i + m - 1 < n; i++) {
        int hash_s = h[i + m];
        if (i)
            hash_s -= h[i];
        int hash_t = T * pw[i];
        if (hash_s == hash_t) {
            cout << i << ' ';
        }
    }

    return 0;
}
