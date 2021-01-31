#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int max = v[0];
    for (int i = 0; i < n; i++){
        if (v[i] > max)
            max = v[i];
    }

    cout << max;
    return 0;
}