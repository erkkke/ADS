#include <bits/stdc++.h>

using namespace std;

vector<int> prefix_function(string s) {
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

int main(){
    string s, q;
    cin >> s >> q;
    while (q--) {
        
    }
    
    return 0;
}