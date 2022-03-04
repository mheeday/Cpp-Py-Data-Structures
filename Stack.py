class Stack:
    def __init__(self):
        """ A simple Implementtion of the Stack Data Structure"""
        self.list = []

    def push(self, *items):
        for item in items:
            self.list.append(item)

    def pop(self):
        try:
            self.list.pop()
        except:
            print ("Empty Stack")

    def print(self):
        for item in self.list:
            print(item, "-> ", end="")


sampleStack = Stack()

sampleStack.pop()

sampleStack.push(1)
sampleStack.push(2)
sampleStack.push(3,4,5)

sampleStack.pop()

sampleStack.print() 

