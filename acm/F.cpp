#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
void quicksort(int l, int r) {
    int i = l;
    int j = r;
    int p = s[(l + r) / 2];

    while (i < j) {
        while (s[i] < p) i++;
        while (s[j] > p) j--;
        if (i <= j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        quicksort(l, j);
    if (i < r)
        quicksort(i, r);
}

int main(){
    int n; cin>>n;
    for (int i = 0; i < n; i++){
        cin >> s;
        string a = s;
        sz = s.size()
        quicksort(0, sz - 1);
        char f1 = a[0];
        char f2 = s[0];

        for (int j = 0; j < sz; j++){
            if (a[j] == f1)
                a[j] = f2;
            else if (a[j] == f2)
                a[j] = f1;
        }
        cout << a << '/n';
    }
}