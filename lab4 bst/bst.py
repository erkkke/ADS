class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None

    def insert(self, node, data):
        if node == None:
            node = Node(data)

        if data <= node.data:
            node.left = self.insert(node.left, data)
        else:
            node.right = self.insert(node.left, data)
        return node

    def inOrder(self, node):
        if node == None:
            return
        self.inOrder(node.left)
        print(node.data)
        self.inOrder(node.right)

def insert(root,key):
    if root is None:
        return Node(key)
    else:
        if root.data < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
    return root
def inorder(root):
    if root:
        inorder(root.left)
        print(root.data)
        inorder(root.right)

r = Node(50)
r = insert(r, 30)
r = insert(r, 20)
r = insert(r, 20)
r = insert(r, 40)
r = insert(r, 70)
r = insert(r, 60)
r = insert(r, 80)
inorder(r)