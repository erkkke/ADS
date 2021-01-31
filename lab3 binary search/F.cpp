#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int max = *max_element(v, v + n);
    int min = *min_element(v, v + n);
    for (int i = 0; i < n; i++){
        if (v[i] == max)
            v[i] = min;
        cout << v[i] << ' ';
    }
}