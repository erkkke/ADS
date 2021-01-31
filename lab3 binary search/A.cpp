#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int b;
        cin >> b;
        a.push_back(b);
    }
    cin >> x;

    deque<int> res;
    for (int i = 0; i < a.size(); i++){
        if (a[i] == x)
            res.push_back(i);
    }
    
    while(!res.empty()){
        cout << res.front() + 1 << ' ';
        res.pop_front();
    }

    return 0;
}