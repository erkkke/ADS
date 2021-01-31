#include <iostream>
 
using namespace std;
 
const int N = 5e5 + 1000;
int heap[N];
 
int heapify_up(int i) {
    while(i > 1 && heap[i] > heap[i / 2]) {
        swap(heap[i], heap[i / 2]);
        i = i / 2;
    }
    return i;
}
 
int heapify_down(int i, int sz) {
    int mx = heap[i];
    int cand = i;
    if(i * 2 <= sz && heap[2 * i] > mx) {
        mx = heap[2 * i];
        cand = i * 2;
    }
    // i * 2 > sz
    if(i * 2 + 1 <= sz && heap[2 * i + 1] > mx) {
        mx = heap[2 * i + 1];
        cand = i * 2 + 1;
    }
 
    if(cand == i)
        return i;
    swap(heap[cand], heap[i]);
    return heapify_down(cand, sz);

}
void remove_max(int sz) {
    int mx = heap[1];
    swap(heap[1], heap[sz]);
    --sz;
    heapify_down(1, sz);
    for(int i = 1; i <= sz; ++i)
        cout << heap[i] << ' ';
    cout << '\n';
} 
void insert(int x, int sz) {
    ++sz;
    heap[sz] = x;
    // cout << heapify_up(sz) << '\n';
}
void del(int i, int sz) {
    cout << heap[i] << '\n';
    swap(heap[i], heap[sz]);
    --sz;
    heapify_down(i, sz);
    heapify_up(i);
}
int main () {
    int n;
    cin >> n;
    // for any i -> heap[i] >= max(heap[2 * i], heap[2 * i + 1])
    for(int i = 1; i <= n; ++i) 
        cin >> heap[i];

    int sz = n;
    for(int i = n; i >= 1; --i)
        heapify_down(i, n);
 
    for(int i = 1; i <= n; ++i)
        cout << heap[i] << ' ';
    cout << '\n';
 
    for(int i = 1; i < n; ++i)
        remove_max(sz --);
    for(int i = 1; i <= n; ++i)
        cout << heap[i] << ' ';

}