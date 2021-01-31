#include <iostream>

using namespace std;
int cnt = 0;
class Node {
    public:
    int data;
    Node *left, *right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST {
    public:
    Node *root;
    BST() {
        root = NULL;
    }

    Node* insert(Node *node, int data) {
        if (node == NULL) {
            node = new Node(data);
            return node;
        }

        if (data < node->data) {
            node->left = insert(node->left, data);
        } else if (data > node->data){
            node->right = insert(node->right, data);
        }
        return node;
    }

    int len(Node *node) {
        if (node == NULL)
            return 0;
        len(node->left);
        cnt++;
        len(node->right);
        return 0;
    }
};

int main(){
    BST *bst = new BST();
    while (true){
        int x; cin >> x;
        if (x == 0) break;
        bst->root = bst->insert(bst->root, x);
    }
    bst->len(bst->root);
    cout << cnt;
}