#include <bits/stdc++.h>

using namespace std;

int main() {
    long long s, a, b, trueA, trueB;
    bool isTrue = false;
    cin >> s;
    int f = 1;
    

    for (int i = 2; i * i <= s; i++) {
        b = sqrt(s - i * i);
        a = i;
        if (s == a * a + b * b) {
            isTrue = true;
            break;
        }
    }

    if (isTrue) {
        // cout << a << ' ' << b;
        cout << f << ' ' << f + a << endl;
        cout << f + b << ' ' << f << endl;
        cout << f + a << ' ' << f + a + b << endl;
        cout << f + a + b << ' ' << f + b;
    }
    else 
        cout << "Impossible";
    
    return 0;
}