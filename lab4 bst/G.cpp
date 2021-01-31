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
    void inOrder(Node *node){
        if (node == NULL)
            return;
        inOrder(node->left);
        if ((node->left != NULL && node->right == NULL) || (node->left == NULL && node->right != NULL))
            cout << node->data << endl;
        inOrder(node->right);
    }
};

int main() {
    BST *bst = new BST();
    
    while (true){
        int x; cin >> x;
        if (x == 0) break;
        bst->root = bst->insert(bst->root, x);
    }
    bst->inOrder(bst->root);
    
    return 0;
}