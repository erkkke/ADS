#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    deque <int> q1;
    deque <int> q2;
    vector <int> v;
    cin>>n;
    char c;
    int k;

    for (int i = 0; i < n; i++){
        cin>>c;
        if(c=='+'){
            cin >> k;
            q2.push_back(k);
        }else if (c=='-'){
            if (q1.empty()){
                break;
            }else{
                v.push_back(q1.front());
                q1.pop_front();
            }
        }else if(c=='*'){
            cin>>k;
            q2.push_front(k);
        }
        if (q2.size() > q1.size()){
            int a = q2.front();
            q2.pop_front();
            q1.push_back(a);
        }
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] <<endl;
}