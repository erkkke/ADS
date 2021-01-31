#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 26;

class Node {
    public:
    char value;
    int cnt;
    Node *ch[26];
    Node(char value) {
        this->value = value;
        for (int i = 0; i < N; i++)
            ch[i] = NULL;
        cnt = 1;
    }
};

class Trie {
    public:
    Node *root;
    int cnt;
    Trie() {
        root = new Node(' ');
    }

    void insert(string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL){
                cur = cur->ch[s[i] - 'a'];
                cur->cnt++;
            }
            else {
                Node *node = new Node(s[i]);
                cur->ch[s[i] - 'a'] = node;
                cur = node;
            }
        }
    }

    void search(Node *node, string s) {
        for (int i = 0; i < s.size(); i++) {
            if ()
        }
        if (s != "") 
            cout << s << " - " << node->cnt << endl;
        for (int i = 0; i < N; i++)
            if (node->ch[i] != NULL)
                search(node->ch[i], s + node->ch[i]->value);
            
    }
};

int main() {
    string s;
    cin >> s;
    Trie *trie = new Trie();
    trie->insert(s);
    
    int n;
    cin >> n;
    while (n--) {
        string t;
        cin >> t;
        trie->search(trie->root, t);
    }
    

    return 0;
}