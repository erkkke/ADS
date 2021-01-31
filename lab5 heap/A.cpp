#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
    public:
    vector<int> a;

    int parent(int i){
        return (i - 1) / 2;
    }

    int left(int i){
        return (i * 2) + 1;
    }

    int right(int i){
        return (i * 2) + 2;
    }

    void SiftUp(int i){
        while (i > 0 && a[parent(i)] < a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void insert(int value){
        a.push_back(value);
        int i = a.size() - 1;
        SiftUp(i);
    }

    int f(int i, int x){
        a[i] += x;
        while (i > 0 && a[parent(i)] < a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
        return i;
    }
};

int main(){
    MaxHeap *heap = new MaxHeap();
    int n1, n2, x, pos;
    cin >> n1;
    for (int i = 0; i < n1; i++){
        cin >> x;
        heap->insert(x);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++){
        cin >> pos >> x;
        cout << heap->f(pos - 1, x) + 1 << endl;
    }
    for (int i = 0; i < n1; i++){
        cout << heap->a[i] << ' ';
    }    
    return 0;
}