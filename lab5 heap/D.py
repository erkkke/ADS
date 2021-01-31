class MaxHeap:
    def __init__(self):
        self.a = []
        self.pos = int()

    def parent(self, i):
        return (i - 1) // 2

    def left(self, i):
        return i * 2 + 1

    def right(self, i):
        return i * 2 + 2

    def getMax(self):
        return self.a[0]

    def heapify(self, i):
        if self.left(i) > len(self.a) - 1:
            self.pos = i
            return
        j = self.left(i)
        if self.right(i) < len(self.a) and self.a[self.left(i)] < self.a[self.right(i)]:
            j = self.right(i)
        if self.a[i] < self.a[j]:
            self.a[i], self.a[j] = self.a[j], self.a[i]
            self.pos = j
            self.heapify(j)

    def insert(self, value):
        self.a.append(value)
        i = len(self.a) - 1
        while i > 0 and self.a[self.parent(i) < self.a[i]]:
            self.a[self.parent(i)], self.a[i] = self.a[i], self.a[self.parent(i)]
            i = self.parent(i)
        return i

    def extractMax(self):
        root = self.getMax()
        self.a[0], self.a[-1] = self.a[-1], self.a[0]
        self.a.pop(-1)
        self.pos = 0
        self.heapify(0)
        return root


heap = MaxHeap()
n, m = [int(i) for i in input().split()]
for i in range(m):
    l = [int(i) for i in input().split()]

    if l[0] == 1:
        if len(heap.a) == 0:
            print(-1)
        elif len(heap.a) == 1:
            print(0, heap.extractMax())
        else:
            res = heap.extractMax()
            print(heap.pos + 1, res)
    elif l[0] == 2:
        if len(heap.a) >= n:
            print(-1)
        else:
            print(heap.insert(l[1]) + 1)

    for i in range(len(heap.a)):
        print(heap.a[i], end=' ')

