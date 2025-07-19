#include <iostream>
using namespace std;

void alt_chars_rev(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j <= (n - i - 1); j++) {
            cout << ch++ << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of lines you want ";
    cin >> n;

    alt_chars_rev(n);
    
    return 0;
}