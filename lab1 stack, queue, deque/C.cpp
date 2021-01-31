#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> q;
    int n;

    while (true){
        string s;
        cin >> s;

        if (s == "push_front"){
            cin >> n;
            q.push_front(n);
            cout << "ok" << endl;
        }
        else if (s == "push_back"){
            cin >> n;
            q.push_back(n);
            cout << "ok" << endl;
        }
        else if (s == "pop_back"){
            if (!q.empty()){
                cout << q.back() << endl;
                q.pop_back();
            }
            else
            cout << "error" << endl;
            }
        else if (s == "pop_front"){
            if (!q.empty()){
                cout << q.front() << endl;
                q.pop_front();
            }
            else
            cout << "error" << endl;
        }
        else if (s == "front"){
            if (!q.empty()){
                cout << q.front() << endl;
            }
            else
            cout << "error" << endl;
        }
        else if (s == "back"){
            if (!q.empty()){
                cout << q.back() << endl;
            }
            else
            cout << "error" << endl;
        }
        else if (s == "size"){
            cout << q.size() << endl;
        }
        else if (s == "clear"){
            while (!q.empty())
            q.pop_back();
            cout << "ok" << endl;
        }
        else if (s == "exit"){
            cout << "bye" << endl;
            return 0;
        }

        
    }
}