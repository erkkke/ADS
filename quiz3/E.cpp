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

int main(){
    string s;
    cin >> s;

    vector<int> p = prefix_function(s);

    for (int i = s.size() - 1; i > 0; i--){                    
        int cnt = 0;                                        
        for (int j = 0; j < p.size(); j++){
            if (p[j] == p[i]){
                cnt++;
            }
        }
        if (cnt >= 2){
            cout << s.substr(0, p[i]);
            return 0;
        }
    }

    cout << "Just a legend";
    return 0;
}