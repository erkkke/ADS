#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q; cin >> n >> q;
    int len = 4;

    vector<int> v;
    int a[q][len];

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < q; i++){
        for (int j = 0; j < len; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < q; i++){
        int cnt = 0;
        for (int j = 0; j < n; j++){
            if ((a[i][0] <= v[j] && v[j] <= a[i][1]) || (a[i][2] <= v[j] && v[j] <= a[i][3]))
                cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}