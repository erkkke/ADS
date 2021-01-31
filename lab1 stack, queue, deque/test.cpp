#include <bits/stdc++.h>
using namespace std;

int main(){
string s, str;
queue<string> q;
getline(cin, s);
if (s.substr(0,3) == "10")
str = s.substr(3,s.size());
cout << str;
}