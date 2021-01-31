#include <bits/stdc++.h>

using namespace std;
struct date {
    int d;
    int m; 
    int y; 
}; 
  
int main() {
    int n; cin >> n; 
    struct date a[n]; 
    for(int i = 0; i < n; i++) { 
        cin >> a[i].d; 
        cin >> a[i].m; 
        cin >> a[i].y; 
    } 
    for (int i=0; i < n - 1; i++) { 
        for (int j = i + 1 ; j < n; j++) { 
            if (a[i].y > a[j].y) { 
                struct date temp = a[i]; 
                a[i] = a[j];
                a[j] = temp;
            } 
            else if (a[i].y == a[j].y && a[i].m > a[j].m) { 
                struct date temp = a[i]; 
                a[i] = a[j]; 
                a[j] = temp; 
            } 
            else if (a[i].y == a[j].y && a[i].m == a[j].m && a[i].d > a[j].d) {   
                struct date temp = a[i]; 
                a[i] = a[j]; 
                a[j] = temp; 
            } 
  
        } 
    } 
  
    for(int i = 0; i < n; i++) { 
        cout << a[i].d << ' ' << a[i].m << ' ' << a[i].y << endl;
    } 
    return 0;
}