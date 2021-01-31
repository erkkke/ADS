#include <iostream>
using namespace std;
int main()
{
  int n, m;
    cin >> n >> m;
    int arr[n][m],mini[n],maxi[m];
  for(int i = 0; i < n; i++){
        mini[i] = 1e5;
    }
  for(int j = 0; j < m; j++){
        maxi[j] = -1e5;
    }
  for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            mini[i]=min(mini[i], arr[i][j]);
            maxi[j]=max(maxi[j], arr[i][j]);
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0;j < m; j++){
            if(arr[i][j] == mini[i] && arr[i][j] == maxi[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;
}