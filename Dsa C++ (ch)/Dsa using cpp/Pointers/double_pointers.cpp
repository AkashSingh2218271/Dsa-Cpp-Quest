#include <iostream>
using namespace std;

int main() {
    int val = 5;
    int *p = &val;
    cout << "*p " << *p << endl;
    int **ptr = &p; /* double pointer */

    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;
    cout << "done\n";
    cout << "p1 " << p1 << endl;
    cout << "p1 address(&p1) " << &p1 << endl;
    cout << "*p2 " << (*p2) << endl;
    cout << "i " << i << " *p1 " << (*p) << " **p2 " << *(*p2) << endl;
    cout << "&i " << &i << " p1 " << p1 << " *p2 " << *p2 << endl;
    cout << "&p1 " << &p1 << " p2 " << p2 << endl;

    return 0;
}