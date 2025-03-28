#include <iostream>
using namespace std;

int main() {
    int num = 5;
    cout << num << endl;

    // ampersand operator - & 
    cout << "address of num " << &num << endl;
    int *ptr = &num;
    cout << "value of num is " << *ptr << endl;
    cout << "address of num is " << ptr << endl;
    cout << "size of pointer is " << sizeof(ptr) << endl;
    int arr[3] = {1, 2, 4};
    cout << "value at first index in array " << (*arr) << endl;
    cout << "value at first index in array " << arr[0] << endl;
    cout << "value at first second in array " << *(arr + 1) << endl;
    cout << "address of first index in array " << arr << endl;
    int i = 0;
    cout << "i[arr] (i = 0) is valid syntax in cpp and its eval to first value in array " << i[arr] << endl; /* arr[i] = *(arr + i) -> i[arr] = *(i + arr) */
    
    // sizeof pointer and array
    double a[10];
    cout << "size of array " << sizeof(a) << endl;
    cout << "size of (*a) " << sizeof(*a) << endl;
    cout << "size of (&a) " << sizeof(&a) << endl;

    double *q = &a[0];
    cout << "size of pointer (q) " << sizeof(q) << endl;
    cout << "size of (*q) " << sizeof(*q) << endl; // printing the size after dereferencing (which is size of double)
    cout << "size of (&ptr) " << sizeof(&q) << endl;
    return 0;
}