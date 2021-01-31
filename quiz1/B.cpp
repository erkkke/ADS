#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    deque<string> q;
    int cnt = 1;
    for (int i = 0; i <= n; i++){
        string s;
        getline(cin, s);
        if (s[0] == '1')
            if (cnt % 2 == 0)
                q.push_front(s.substr(2, s.size() - 2));
            else 
                q.push_back(s.substr(2, s.size() - 2));
        else if (s[0] == '2'){
            cnt++;
        }
    }

    if (cnt % 2 != 0){
        while(!q.empty()){
            cout << q.front() << ' ';
            q.pop_front();
    }
    }
    else {
        while(!q.empty()){
        cout << q.back() << ' ';
        q.pop_back();
    }
    }
    return 0;
}