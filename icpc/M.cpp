#include <bits/stdc++.h>

using namespace std;

int a[400000];

void qsort(int l, int r) {
    int i = l;
    int j = r;
    int pvt = a[(l + r) / 2];

    while (i < j) {
        while (a[i] < pvt) i++;
        while (a[j] > pvt) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        qsort(l, j);
    if (i < r)
        qsort(i, r);
}

int main(){ 
    int n; cin >> n;
    int x = 100000000;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    qsort(1, n);
    for (int i = 2; i <= n; i++) {
        if (x >= a[i] - a[i - 1]) {
            x = a[i] - a[i - 1];
        }
    }
    cout << endl << x;

    return 0;
}