#include <iostream>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1],mn[n+1],mx[m+1];
    for(int i=1;i<=n;i++){
        mn[i]=1111;
    }
    for(int j=1;j<=m;j++){
        mx[j]=-1111;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            mn[i]=min(mn[i],a[i][j]);
            mx[j]=max(mx[j],a[i][j]);
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==mn[i]&&a[i][j]==mx[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;
}
