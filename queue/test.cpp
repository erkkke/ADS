#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(14);
    q.push(16);
    while (!q.empty()){
        cout << q.front() << ' ';
        q.pop();
    }
    
    return 0;
}