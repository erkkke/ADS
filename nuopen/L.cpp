#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
void go() {
    int t;
    cin >> t;
    int x, y;
    string direction;

    for(int i = 0; i < t; t++){
        cin >> x >> y >> direction;
    }
    for(int i = 0; i < t; t++){
        int steps = 1;
        if(direction == "n"){
            y += steps;
        }
        if(direction == "s"){
            y -= steps;
        }
        if(direction == "e"){
            x += steps;
        }
        if(direction == "w"){
            x -= steps;
        }

    }
    int cnt = t;
    for(int i = 0; i < t; t++){
        if()
    }

}





int main() {
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}