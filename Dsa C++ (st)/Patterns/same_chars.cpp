#include <iostream>
using namespace std;

void same_chars(int n) {
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of lines you want ";
    cin >> n;

    same_chars(n);
    
    return 0;
}