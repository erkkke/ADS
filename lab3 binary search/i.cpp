#include <bits/stdc++.h>

using namespace std;

int lower(vector<int> &v, int k){
    int l = 0;
    int r = v.size() - 1;

    while (l != r){
        int m = (l + r) / 2;
        if (v[m] < k)
            l = m + 1;
        else 
            r = m;
    }

    if (v[l] == k)
        return l + 1;
    else 
        return 0;
}

int upper(vector<int> &v, int k){
    int l = 0;
    int r = v.size() - 1;

    while (l < r - 1){
        int m = (l + r) / 2;
        if (v[m] <= k)
            l = m;
        else 
            r = m - 1;
    }
    if (v[r] == k)
        return r + 1;
    else if (v[l] == k)
        return l + 1;
    else return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v, a;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < m; i++){
        int low = lower(v, a[i]);
        int up = upper(v, a[i]);
        if (low == 0 && up == 0)
            cout << 0 << endl;
        else 
            cout << low << ' ' << up << endl;
    }
}