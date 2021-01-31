#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n; cin >> n;
    int prev = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        char c = (x - prev) / pow(2, i) + 97;
        cout << c;
        prev = x;
    }
    
    return 0;
}