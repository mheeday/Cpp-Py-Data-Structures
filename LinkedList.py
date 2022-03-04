class Node:
    def __init__(self, data, next):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def add_to_front(self, Node):
        self.head = Node.data, Node.next

    def add_to_end(self, Node):
        


