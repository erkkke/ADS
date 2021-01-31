#include <bits/stdc++.h>

using namespace std;

int main(){
   int res1, res2;
   int a, x, b, y, t;
   cin >> a >> x >> b >> y >> t;
   if (t > 30) {
      res1 = a + (t - 30) * x * 21;
   }
   else {
      res1 = a;
   }

   if (t > 45) {
      res2 = b + (t - 45) * y * 21;
   }
   else
   {
      res2 = b;
   }
    
   cout << res1 << ' ' << res2;
   return 0;
}