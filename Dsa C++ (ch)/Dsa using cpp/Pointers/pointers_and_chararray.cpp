
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4};
    char ch[5] = "abcd";
    
    cout << "arr " << arr << endl;
    cout << "ch " << ch << endl;
    /* cout works differently for char and int array 
        char array -> print string
        int array -> print address
    */
    
    char *c = &ch[0];
    cout << "c " << c << endl; /* print the enritre string bcz cout works differently for char array */
    char t = 'a';
    char *c1 = &t;
    cout << t << endl;
    
    // char cw[7] = "abcdef";
    // char *c2 = "abcdef"; /* Risk to if done like this  and through error */  
    // cout << "*c2 " << (*c2) << endl;

    return 0;
}