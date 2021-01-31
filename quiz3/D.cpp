#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> p(n, 0);
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[i] != s[j])
            j = p[j - 1];
        if (s[i] == s[j])
            j++;
        p[i] = j;
    }
    return p;
}

int main() {
    string s, t;
    int k;
    cin >> s >> k >> t;
    t = s + "#" + t;
    vector<int> p = prefix_function(t);
    int cnt = 0;
    for (int i = 0; i < t.size(); i++) {
        if (p[i] == s.size())
            cnt++;
        if (cnt >= k) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}