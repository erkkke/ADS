#include <bits/stdc++.h>

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

int main(){
    string s; cin >> s;
    int cnt = 0, a, b;
    vector<int> p = prefix_function(s);

    for(int i = 1; i < s.size() - 1; i += 2){
        a = i + 1;
        b = a - p[i];
        if(a % b == 0 && (a / 2) % b == 0)
            cnt++;
    }

    cout << cnt;

    return 0;
}