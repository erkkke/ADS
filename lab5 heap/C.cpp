#include <iostream>
#include <vector>

using namespace std;
int pos;
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

    int getMax(){
        return a[0];
    }

    void SiftUp(int i){
        while (i > 0 && a[parent(i)] < a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void heapify(int i){
        if (left(i) > a.size() - 1){
            pos = i;
            return;
        }
        
        int j = left(i);
        if (right(i) < a.size() && a[left(i)] < a[right(i)])
            j = right(i);
        if (a[i] < a[j]){
            swap(a[i], a[j]);
            pos = j;
            heapify(j);
        }
    }

    void insert(int value){
        a.push_back(value);
        int i = a.size() - 1;
        SiftUp(i);
    }

    int extractMax(){
        int root = getMax();
        swap(a[0], a[a.size() - 1]);
        a.pop_back();
        pos = 0;
        heapify(0);
        return root;
    }
};

int main(){
    MaxHeap *heap = new MaxHeap();
    int n, x, res;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        heap->insert(x);
    }
    for (int i = 1; i < n; i++) {
        res = heap->extractMax();
        cout << pos + 1 << ' ' << res << endl;
    }
    return 0;
}