#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    if (n > 1) {
        for (int j = 0; j < n - 1; j++) {
            for (int i = 1; i < n; i++) {
                if (1 <= i - j && j > 0 && i + j <= n && s[i - j] == s[i] && s[i] == s[i + j]) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}