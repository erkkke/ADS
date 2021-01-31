#include <bits/stdc++.h>
using namespace std;

bool bin(vector<int> &a, int k){
    int l = 0;
    int r = a.size() - 1;

    while (l < r){
        int m = (l + r) / 2;
        if ( a[m] == k)
            return true;
        else if (a[m] > k)
            r = m - 1;
        else 
            l = m + 1;
    }
    if (a[r] == k)
        return true;
    return false;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a, b;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < k; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }

    for (int i = 0; i < k; i++){
        if (bin(a, b[i]))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

}