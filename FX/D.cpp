#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;

void solve(string s) {
    stack<char> a;
    for (int i = 0; i < s.size(); i++) {
        if(a.size() == 0)
            a.push(s[i]);

        else if (a.top() == s[i])
            a.pop();

        else
            a.push(s[i]);
    }
    if (!a.size())
        cnt++;
}

int main() {
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        solve(s);
    }
    cout << cnt;
    return 0;
}