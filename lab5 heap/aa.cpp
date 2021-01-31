#include <iostream>
#include <cstdio>
#include <stack>
#include <vector>

using namespace std;

class Heap{
    public:
    vector<int>a;
    int sz;

    Heap(){
        sz=0;
    }
    int pr(int i){
        return (i - 1) / 2;
    }
    int left(int i){
        return (i * 2) + 1;
    }
    int right(int i){
        return (i * 1) + 2;
    }
    void add(int x){
        a.push_back(x);
        sz++;
        int i = sz - 1;
        while(i > 0 && a[pr(i)] < a[i]){
            swap(a[pr(i)],a[i]);
            i = pr(i);
        }
    }
    int upd(int pos, int x){
        a[pos] += x;
        while(pos > 0 && a[pr(pos)] < a[pos]){
            swap(a[pr(pos)], a[pos]);
            pos = pr(pos);
        }
        return pos;
    }
};

int main(){
    int n;
    Heap *h = new Heap();
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin>>x;
        h -> add(x);
    }
    int q;
    cin >> q;
    while(q--){
        int pos, x;
        cin >> pos >> x;
        cout << h -> upd(pos - 1, x) + 1 << "\n";
    }
    for(int i = 0; i < h -> a.size(); i++){
        cout << h -> a[i] << " ";
    }
    return 0;
}
