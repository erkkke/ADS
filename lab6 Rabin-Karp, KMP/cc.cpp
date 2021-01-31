#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

int main(){
    string s, t;
    cin >> s >> t;
    s = s + "#" + t + t;
    vector<int> p = prefix_func(s);
    for(int i = 0; i < s.size(); i++){
        if(p[i] == t.size()) {
            cout << i - 2 * t.size();
            return 0;
        }
    }
    cout << "-1";
    return 0;
}