#include <iostream>
using namespace std;

void alt_chars(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch++ << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of lines you want ";
    cin >> n;

    alt_chars(n);
    
    return 0;
}