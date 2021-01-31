#include <bits/stdc++.h>
using namespace std;
int n;
string s, t;

vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}

void solve(string s) {
    vector<int> p = prefix_func(s);
    for(int i = 0; i < s.size(); i++)
        if(p[i] == t.size()) {
            cout << i - 2 * t.size();
            return;
        }

    cout << -1;
}

int main(){
    cin >> n >> s >> t;
    solve(s + "#" + t + t);
    return 0;
}