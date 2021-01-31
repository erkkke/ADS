#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int med = -1000000;
    int l = 0, r = 1; 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s;
    for (int i = 0; i < n - 1; i++) {
        vector<int> res;
        res.push_back(a[i]);
        if (i == 0)
            s = n - 1;
        else s = n;
        for (int j = i + 1; j < s; j++) {
            res.push_back(a[j]);
            sort(res.begin(), res.end());
            if (res[(res.size() - 1) / 2] > med){
                med = res[(res.size() - 1) / 2];
                l = i;
                r = j;
            }
            else if (res[(res.size() - 1) / 2] == med && j - i > l - r) {
                med = res[(res.size() - 1) / 2];
                l = i;
                r = j;
            }
        }
    }
    cout << l + 1 << ' ' << r + 1;
    return 0;
}