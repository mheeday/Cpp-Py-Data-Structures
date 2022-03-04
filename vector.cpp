#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    int a[] = {4,6,8,9,7,5,3,2,1};

    int len_a = sizeof(a)/sizeof(a[0]);

    vector <int> vec;

    for (int i = 0; i <len_a; i++) {
        vec.push_back(a[i]);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i <len_a; i++) {
        cout << vec[i] << " ";
    }

    reverse(vec.begin(), vec.end());
    for (int i = 0; i <len_a; i++) {
        cout << vec[i] << " ";
    }

    cout << "\nMinimum Vale"<< *min_element(vec.begin(), vec.end());
    cout << "\nMinimum Vale"<< *max_element(vec.begin(), vec.end());
}