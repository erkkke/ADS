#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> f, s;
    int a;
    int cnt = 0;
    int n = 5;


    for (int i = 0; i < n; i++){
        cin >> a;
        f.push(a);
    }
    for (int i = 0; i < n; i++){
        cin >> a;
        s.push(a);
    }

    while (!f.empty() && !s.empty()){
        if (f.front() == 9 && s.front() == 0){
            s.push(f.front());
            s.push(s.front());
        }else if (f.front() == 0 && s.front() == 9){
            f.push(f.front());
            f.push(s.front());
        }else if (f.front() > s.front()){
            f.push(f.front());
            f.push(s.front());
        }else if (f.front() < s.front()){
            s.push(f.front());
            s.push(s.front());
        }

        s.pop();
        f.pop();
        cnt++;

        if (cnt >= 1000000){
            cout << "botva";
            return 0;
        }
    }

    if (!f.empty() && s.empty())
    cout << "first " << cnt;
    else 
    cout << "second " << cnt;
    
}
