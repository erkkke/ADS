#include <iostream>

using namespace std;

void quicksort(int l, int r) {
    int i = l;
    int j = r;
    int p = a[(l + r) / 2];

    while (i < j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        quicksort(l, j);
    if (i < r)
        quicksort(i, r);
}

void f(string s, int n){
    string a, b;
    for (int i = 0; i < n; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u')
            a += s[i];
        else
            b += s[i];
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++){
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < b.size(); i++) {
        for (int j = i + 1; j < b.size(); j++){
            if (b[i] > b[j])
                swap(b[i], b[j]);
        }
    }

    cout << a << b;
}
int main(){
    int n;
    string s, a, b;
    cin >> n >> s;
    f(s, n);
    return 0;
}