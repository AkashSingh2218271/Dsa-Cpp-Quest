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
    
    return 0;
}