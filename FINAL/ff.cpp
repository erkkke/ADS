#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, mini = 1000000000000000;
vector<ll> a;

int main() {
  cin >> n;
  vector<ll> b(n);

  for (int i = 0; i < n; i++) {
    cin >> b[i];
    if (i)
      mini = min(abs(b[i] + b[i - 1]), mini);
  }
  cout << mini;
  return 0;
}