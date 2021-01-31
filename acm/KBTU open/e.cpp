#include <bits/stdc++.h>

using namespace std;

main() {
    string s1, s2;
    int w1 = 0, w2 = 0, b1 = 0, b2 = 0, f1 = 0, f2 = 0;
    cin >> s1 >> s2;
    int n = s1.size();
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (s1[i] == 'w') w1++;
        else if (s1[i] == 'b') b1++;
        else f1++;

        if (s2[i] == 'w') w2++;
        else if (s2[i] == 'b') b2++;
        else f2++;

        if (s1[0] == 'w' && s1[0] != s2[0] || s1[n - 1] == 'b' && s1[n - 1] != s2[n - 1])
            ok = false;
    }
    
    if (w1 == w2 && b1 == b2 && (f1 == f2 || f1 > 0) && ok)
        cout << "Yes";
    else 
        cout << "No";

 }