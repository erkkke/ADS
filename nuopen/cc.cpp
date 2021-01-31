#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, l = 0, r = 0, m = 0;
    cin >> n;
    int a[n];
    vector<int> v;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int s, b, c;
    for(int i = 1; i <= n; i++){
        if (m < c){
            m = c;
            l = s;
            r = b;
        }
        for(int j = i + 2; j <= n - 2; j++){
            while(i <= j){
                v[i] = a[i];
            }
            sort(v.begin(), v.end());
            s = v[0]; 
            b = v[v.size() - 1];
            if(v.size() % 2 == 0){
                c = v[(v.size() - 1) / 2];
            }else{
                c = v[v.size() / 2];
            }
        }
    }
    cout << l << " " << r;
    return 0;
}