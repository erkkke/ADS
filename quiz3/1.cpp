#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &v, int l, int r, int x) {
    int cnt = 0;
 
    while (r >= l) {
        if (v[l] == x) 
            if (r != l)
                cnt++;
        if (v[r] == x)
            cnt++;
        l++;
        r--;
    }
    return cnt;
}

int main() {
    int n, t, l, r, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> t;
    while (t--) {
        cin >> l >> r >> x;
        cout << solve(v, l - 1, r - 1, x) << endl;
    }
    return 0;
}