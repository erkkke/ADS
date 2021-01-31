#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> prefix(string s) {
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
    int n, q;
    cin >> n >> q;
    string s[n], t;
    for (int i = 0; i < n; i++) 
        cin >> s[i];
    for (int i = 0; i < q; i++) {
        cin >> t;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            s[i] = t + '#' + s[i];
            vector<int> p = prefix(s[i]);
            for (int i = 0; i < s[i].size(); i++) {
                if (p[i] == t.size())
                    cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}