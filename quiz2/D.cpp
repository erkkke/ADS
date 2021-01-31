#include <bits/stdc++.h>

using namespace std;

long long a[100000];

void qsort(int l, int r) {
    int i = l;
    int j = r;
    int p = a[(l + r) / 2];

    while (i < j) {
        while (a[i] < p) 
            i++;
        while (a[j] > p)
            j--;
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

int main () {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(i <= 2) {
            cout << -1 << endl;
        }else {
            qsort(1, i);
            cout << a[i] * a[i - 1] * a[i - 2] << endl;
        }
    }
    return 0;
}