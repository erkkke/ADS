#include <iostream>
 
using namespace std;

int heap[500000];

int heapify(int i, int sz) {
    int j = heap[i];
    int ind = i;
    if(i * 2 <= sz && heap[2 * i] > j) {
        j = heap[2 * i];
        ind = i * 2;
    }

    if(i * 2 + 1 <= sz && heap[2 * i + 1] > j) {
        j = heap[2 * i + 1];
        ind = i * 2 + 1;
    }
 
    if(ind == i)
        return i;
    swap(heap[ind], heap[i]);
    return heapify(ind, sz);
}

int SiftUp(int i) {
    while(i > 1 && heap[i] > heap[i / 2]) {
        swap(heap[i], heap[i / 2]);
        i = i / 2;
    }
    return i;
}

void insert(int x, int sz) {
    sz++;
    heap[sz] = x;
    cout << SiftUp(sz) << endl;
}

void extractMax(int sz) {
    int root = heap[1];
    swap(heap[1], heap[sz]);
    sz--;
    cout << heapify(1, sz) << ' ' << root << endl;
} 

int main () {
    int n, m;
    cin >> n >> m;
    int sz = 0;
    for (int i = 0; i < m; i++){
        int x; cin >> x; 
        if(x == 1){
            if(sz == 1){
                cout << 0 << ' ' << heap[sz] << endl;
                sz--;
            }
            else if(sz == 0) {
                cout << -1 << endl;
            }
            else {
                extractMax(sz);
                sz--;
            }
        }
        else {
            int k; cin >> k;
            if(sz >= n)
                cout << -1 << endl;
            else {
                insert(k, sz);
                sz++;
            }
        }
    }
    for(int i = 1; i <= sz; i++)
        cout << heap[i] << ' ';
    
    return 0;
}