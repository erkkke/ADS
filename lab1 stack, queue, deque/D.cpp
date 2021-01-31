#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<pair<int, string> > a, b, c;
    string s;
    int i;

    while (cin >> i){
        cin >> s;
        if (i == 9){
        a.push(make_pair(i, s));
        }else if (i == 10){
        b.push(make_pair(i, s));
        }else if (i == 11)
        c.push(make_pair(i, s));
    }

    while (!a.empty()){
        cout << a.front().first << ' ' << a.front().second << endl;
        a.pop();
    }
    while (!b.empty()){
        cout << b.front().first << ' ' << b.front().second << endl;
        b.pop();
    }
    while (!c.empty()){
        cout << c.front().first << ' ' << c.front().second << endl;
        c.pop();
    }
    return 0;
}