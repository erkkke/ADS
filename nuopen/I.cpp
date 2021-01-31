#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    long long x; 
    cin >> n >> x;
    if (n - 1 >= x) {
        cout << 1 << ' ' << 1 << endl;
        return 0;
    }
    float cnt = ceil(x / (n -1));
    int res = cnt;
    cout << cnt << ' ' << cnt * 2 - 1;
    return 0;
}