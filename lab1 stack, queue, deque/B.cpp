#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    int n;

    while (true){
        string s;
        cin >> s;

        if (s == "push"){
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }

        else if (s == "pop"){
            if (!q.empty()){
                cout << q.front() << endl;
                q.pop();
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

        else if (s == "size"){
            cout << q.size() << endl;
        }

        else if (s == "clear"){
            while (!q.empty())
            q.pop();
            cout << "ok" << endl;
        }

        else if (s == "exit"){
            cout << "bye";
            return 0;
        }
    }


}

