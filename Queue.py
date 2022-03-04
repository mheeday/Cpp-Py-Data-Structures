class Queue:
    def __init__(self):
        self.list = []

    def enqueue(self, *items):
        for item in items:
            self.list.append(item)

    def dequeue(self):
        try:
            return self.list.pop(0)
        except:
            print("Empty Queue")

    def print(self):
        print(self.list)

sampleQueue = Queue()

sampleQueue.dequeue()

sampleQueue.enqueue(1)

sampleQueue.enqueue(2,3,4)

sampleQueue.enqueue(5)

sampleQueue.dequeue()

sampleQueue.print()

