#include<iostream>

using namespace std;

int mn, mx = -999999, a[100001];
int n, h, mid;
int main (){
  cin >> n >> h;
  for (int i = 0; i < n; i++){
    cin >> a[i];
    if (a[i] > mx){
      mx = a[i];
        }
  }
  while (mn <= mx){
    mid = mn + (mx - mn)/2;
    int sum = 0;
    for (int i = 0; i < n; i++){
      sum += ((a[i] - 1)/mid + 1);
    }
    if (sum > h){
      mn = mid + 1;
    }
    else if (sum <= h){
      mx = mid - 1;
    }
  }
  cout << mn;
}