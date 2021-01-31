#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    set<string> a;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        string w = "";
        for (int j = i; j < s.size(); j++) {
            w += s[j];
            a.insert(w);
        }
    }

    cout << a.size();

    return 0;
}