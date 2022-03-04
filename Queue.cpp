    #include <iostream>
#include <vector>

using namespace std;

class Queue {
    public:
    vector <int> Queue_vec;

    void enqueue(int item){
        Queue_vec.push_back(item);
        cout << "Enqueue "<< item << "successfully " << endl;
    }

    int dequeue() {
        try
        {
            int element = Queue_vec.front();
            Queue_vec.erase(Queue_vec.begin());
            cout << "Enqueue "<< element << "successfully " << endl;
            return element;
        }
        catch(...)
        {
            cout << "Empty Queue";
        };
        return 0;
    }

    void print() {
        vector <int>::iterator i;
        for (i = Queue_vec.begin(); i != Queue_vec.end() ;i++) {
            cout << *i << "-<";
        };
    };
};

int main() { 
     Queue sampleQueue;
    sampleQueue.dequeue();

    sampleQueue.enqueue(1);

    sampleQueue.enqueue(2);
    sampleQueue.enqueue(3);
    sampleQueue.enqueue(4);

    sampleQueue.enqueue(5);

    sampleQueue.dequeue();

    sampleQueue.print();

}