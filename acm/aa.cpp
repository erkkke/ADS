#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
#define MOD 1000000007ll
int T,n,m,K,W;
int a[160],b[160];
int Abs(int x)
{
	return x<0 ? (-x) : x;
}
ll f[15010],g[15010];
int main()
{
	scanf("%d",&T);
	for(;T;--T)
	  {
	  	scanf("%d%d%d%d",&n,&m,&K,&W);
		for(int i=1;i<=n;++i)
	  	  scanf("%d",&a[i]);
		for(int i=1;i<=m;++i)
	  	  scanf("%d",&b[i]);
	  	memset(f,0,sizeof(f));
	  	memset(g,0,sizeof(g));
	  	f[0]=1;
	  	for(int i=1;i<=n;++i)
	  	  for(int j=15000;j>=0;--j)
	  	    if(a[i]+j<=15000)
	  	      f[j+a[i]]=(f[j+a[i]]+f[j])%MOD;
	  	g[0]=1;
	  	for(int i=1;i<=m;++i)
	  	  for(int j=15000;j>=0;--j)
	  	    if(b[i]+j<=15000)
	  	      g[j+b[i]]=(g[j+b[i]]+g[j])%MOD;
	  	ll ans=0;
	  	for(int i=0;i<=W;++i)
	  	  if(Abs(W-i-i)<=K)
	  	    ans=(ans+f[i]*g[W-i]%MOD)%MOD;
	  	cout<<ans<<endl;
	  }
	return 0;
}