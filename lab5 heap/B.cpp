#include <iostream>
#include <vector>

using namespace std;

int position;
class MaxHeap {
    public:
    vector<int> a;
    
    int parent(int i){
        return (i - 1) / 2;
    }

    int left(int i){
        return i * 2 + 1;
    }

    int right(int i){
        return i * 2 + 2;
    }

    void SiftUp(int i){
        while (i > 0 && a[parent(i)] < a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void heapify(int i){
        if (left(i) > a.size() - 1) {
            return;
        }
        int j = left(i);
        if (right(i) < a.size() && a[left(i)] < a[right(i)])
            j = right(i);
        if (a[i] < a[j]){
            swap(a[i], a[j]);
            position = j;
            heapify(j);
        }
    }

    void insert(int value){
        a.push_back(value);
        int i = a.size() - 1;
        SiftUp(i);
    }

    void Sift_Down(int i, int x) {
        a[i] -= x;
        position = i;
        heapify(i);
    }
};

int main(){
    MaxHeap *heap = new MaxHeap();
    int n1, n2, pos, x;
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> x;
        heap->insert(x);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> pos >> x;
        heap->Sift_Down(pos - 1, x);
        cout << position + 1 << endl;
    }
    for (int i = 0; i < n1; i++){
        cout << heap->a[i] << ' ';
    }
    return 0;
}