#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> a, b, c;
    string s;

    while (getline(cin, s)){
        if (s[0] == '9'){
        a.push(s.substr(2, s.size()-2));
        }else if (s.substr(0, 2) == "10"){
        b.push(s.substr(3, s.size()-3));
        }else if (s.substr(0, 2) == "11")
        c.push(s.substr(3, s.size()-3));
    }

    while (!a.empty()){
        cout << "9 " << a.front() << endl;
        a.pop();
    }
    while (!b.empty()){
        cout << "10 " << b.front() << endl;
        b.pop();
    }
    while (!c.empty()){
        cout << "11 " << c.front() << endl;
        c.pop();
    }
    return 0;
}