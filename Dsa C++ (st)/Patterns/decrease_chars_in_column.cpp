#include <iostream>
using namespace std;

void dec_chars(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + n - i;
        for (int j = 0; j <= i; j++) {
            cout << ch++ << " ";
        }
        cout << "\n";
    }
}

void dec_chars1(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = ('A' + n - i); ch <= ('A' + n - 0); ch++) {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of lines you want (valid up to 25 only) then can go into infinite loop ";
    cin >> n;
    if (n > 25) {
        cout << "invalid input read input details carefully\n";
    } else {
        cout << "Approach one" << endl;
        dec_chars(n);
        cout << "\nApproach two \n";
        dec_chars1(n);
    }
        
    return 0;
}