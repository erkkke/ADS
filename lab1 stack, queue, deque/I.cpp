#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack< int > s[n];
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        while(x--){
            int y;
            cin>>y;
            s[i].push(y);
        }
    }

    if(n==2){
        stack<int> s1 = s[0], s2 = s[1];
        bool one = false, two = false;
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        s1.pop();
        while(!s1.empty()){
            if(s1.top() == 2){
                s2.push(s1.top());
                s1.pop();
                if (one == true)
                    two = true;
            }
            else if (s1.top() == 1){
                one = true;
            }
            if (two){
                cout << 0;
                return 0;
            }
            }
                
        }
    }
