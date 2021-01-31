#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while (t--) {
        int n, c0, c1, h;
        string s;
        cin >> n >> c0 >> c1 >> h >> s;
        int cheap = c0, cnt0 = 0, cnt1 = 0;
        if (c0 > c1)
            cheap = c1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0')
                cnt0++;
            else 
                cnt1++;
        }
        
        int res = c0 * cnt0 + c1 * cnt1;
        if (cheap == c1 && res > cnt0 * h + (cnt0 + cnt1) * cheap)
            res = cnt0 * h + (cnt0 + cnt1) * cheap;
        else if (cheap == c0 && res > cnt1 * h + (cnt0 + cnt1) * cheap)
            res = cnt1 * h + (cnt0 + cnt1) * cheap;
        
        cout << res << endl;
    }
    
    return 0;
}