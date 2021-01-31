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
    string s;
    int q;
    cin >> s >> q;
    
    while (q--) {
        int cnt = 0;
        int l, r;
        cin >> l >> r;
        int len = r - l + 1;
        string check = s.substr(l - 1, len) + '#' + s;
        vector<int> p = prefix_function(check);
        for (int i = 0; i < p.size(); i++) {
            if (p[i] == len)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}