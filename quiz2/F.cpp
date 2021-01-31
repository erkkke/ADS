#include <iostream>
#include <vector>
using namespace std;

int a[400000];
vector <int> ans;
void f(int l, int r) {
    if(r < l)
        return;
    int m = (l + r) / 2;
    ans.push_back(a[m]);
    f(m + 1, r);
    f(l, m - 1);
}
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

int main()
{
    int n; 
    cin >> n;
    int sz = 1;
    for(int i = 0; i < n; i++)
        sz *= 2;

    n = sz - 1;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    qsort(0, n - 1);
    f(0, n - 1);
    for(int x : ans)
        cout << x << ' ';
}