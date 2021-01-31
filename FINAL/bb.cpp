#include <bits/stdc++.h>

using namespace std;

int convert(int a, int n) {
    if (a == n) 
    return 0;

    // m is greater than n
    if (a > n) {
        return a - n;
    }
    // n is odd
    if (n % 2 == 1) 
    // perform '-1' 
    return 1 + convert(a, n+1);
        
    // n is even
    else 
    // perform '*2' 
    return 1 + convert(a, n/2);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << convert(a, b);
}