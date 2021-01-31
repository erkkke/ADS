#include <bits/stdc++.h>

using namespace std;

bool balance = true;

class Node{
    public:
    long long data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST{
    public:
    Node *root;

    BST(){
        root = NULL;
    }

    Node *insert(Node *node, int data){
        if(node == NULL){
            node = new Node(data);
            return node;
        }
        if(data < node->data){
            node->left = insert(node->left, data);
        }else if(data > node->data){
            node->right = insert(node->right, data);
        }
        return node;
    }

};
int isBalanced(Node *node){
    if(node == NULL) 
        return 0;
    int l = isBalanced(node->left) + 1;
    int r = isBalanced(node->right) + 1;
    if(abs(l - r) > 1)
        balance = false;
    return max(l, r);
    }

int main(){
    BST *bst = new BST();
    while(true){
        int x;
        cin >> x;
        if(x == 0)
            break;
        bst->root = bst->insert(bst->root, x);
    }

    isBalanced(bst->root);
    if(balance)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}