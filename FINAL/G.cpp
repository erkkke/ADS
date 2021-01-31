#include <bits/stdc++.h>
using namespace std;

int cnt = 0, pos;
bool ok = false;

vector<int> prefix_function(string s, int len) {
    int n = s.size();
    vector<int> p(n, 0);

    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[i] != s[j])
            j = p[j - 1];
        if (s[i] == s[j])
            j++;
        p[i] = j;
        if (j == len && (s[i - len] == '#' || s[i - len] == '@')) {
            cnt++;
            if (s[i + 1] == '@' || s[i + 1] == '#') {
                pos = i;
                ok = true;
            }
        }
    }
    return p;
}

int main() {
    int n;
    cin >> n;
    string c, s, t;

    for (int i = 0; i < n; i++) {
        cin >> c >> s;
        if (c == "+") {
            t = t + s + '@';
        }
        else if (c == "?") {
            cnt = 0;
            prefix_function(s + '#' + t, s.size());
            cout << cnt << endl;
        }
        else if (c == "-") {
            ok = false;
            prefix_function(s + '#' + t, s.size());
            if (ok)
                t.erase(pos - s.size() - 1, s.size() + 1);
        }
    }

    return 0;
}