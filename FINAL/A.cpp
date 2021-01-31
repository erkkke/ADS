#include <bits/stdc++.h>
using namespace std;

stack<char> a;
string s;

int main() {
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if(a.size() == 0)
            a.push(s[i]);

        else if (a.top() == s[i])
            a.pop();

        else
            a.push(s[i]);
    }

    if (!a.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}