#include <iostream>
#include <vector>

using namespace std;

class Stack {
    
    public:
    int pos = 0;
    vector <int> vec;
        
        void push(int item) {
            vec.push_back(item);
        }

        void pop(){
            try
            {
                vec.pop_back();
            }
            catch(...)
            {
                cout << "Empty String";
            }
            
        }
        
        void print(){
            vector <int> :: iterator i;
            for (i = vec.begin(); i != vec.end(); i++) {
                cout << *i << "-<";
            }
        }
};

int main() {
    Stack sampleStack;

    sampleStack.push(1);
    sampleStack.push(2);
    sampleStack.push(3); sampleStack.push(4); sampleStack.push(5);

    sampleStack.pop();

    sampleStack.print();
}


