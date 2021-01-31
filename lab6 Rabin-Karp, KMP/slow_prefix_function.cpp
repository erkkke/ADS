#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> prefix_f(string s) {
    int n = s.size();
    vector<int> p(n, 0);
    for (int i = 0; i < n; i++) {
        for (int k = 1; k <= i; k++) {
            if (s.substr(0, k) == s.substr(i - k + 1, k))
                p[i] = k;
        }
    }
    return p;
}

int main(){
    string s;
    cin >> s;
    vector<int> p = prefix_f(s);
    for (int i = 0; i < s.size(); i++)
        cout << p[i] << ' ';

    return 0;
}