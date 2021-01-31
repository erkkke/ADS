#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST {
    public:
    Node *root;
    int cnt;
    BST() {
        root = NULL;
        cnt = 0;
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
    void inOrder(Node *node){
        if (node == NULL)
            return;
        inOrder(node->left);
        if (node->left != NULL && node->right != NULL)
            cnt++;
        inOrder(node->right);
    }
};

int main() {
    BST *bst = new BST();
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        bst->root = bst->insert(bst->root, x);
    }
    bst->inOrder(bst->root);
    cout << bst->cnt;
    
    return 0;
}