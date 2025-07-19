#include <iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

int get_sum(int *arr, int n) {
    cout << "Size " << sizeof(arr) << endl;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += i[arr];
    }
    
    return sum;
}

int main() {
    int val = 5;
    int *p = &val;
    print(p);

    int arr[5] = {1, 3, 5, 7, 9};
    cout << "Sum " << get_sum(arr, 5) << endl;

    return 0;
}