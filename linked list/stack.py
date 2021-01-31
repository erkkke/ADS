class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.head = None
        self.sz = 0

    def isempty(self):
        if not self.head: return True
        else: return False

    def push(self, data):
        newnode = Node(data)
        newnode.next = self.head
        self.head = newnode
        self.sz += 1

    def pop(self):
        if self.isempty():
            return None
        else:
            print(self.head.data)
            self.head = self.head.next
            self.sz -= 1

    def top(self):
        if self.isempty():
            return None
        else:
            return self.head.data

    def cout(self):
        it = self.head
        if self.isempty():
            print('Stack is empty')
        else:
            while (it != None):
                print(it.data, end=' ')
                it = it.next

    def size(self):
        return self.sz


MyStack = Stack()

MyStack.push(11)
MyStack.push(22)
MyStack.push(33)
MyStack.push(44)
MyStack.cout()
print(MyStack.size())

# Print top element of stack
print("\nTop element is ", MyStack.top())

# Delete top elements of stack
MyStack.pop()
MyStack.pop()

# Display stack elements
MyStack.cout()

# Print top element of stack
print("\nTop element is ", MyStack.top())



