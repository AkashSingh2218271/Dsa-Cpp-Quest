#include <iostream>
using namespace std;

void chars_pry(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j >= 0; j--) {
            cout << " ";
        }
        char ch;
        for (ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
        }
        ch--;
        for (ch--; ch >= 'A'; ch--) {
            cout << ch;
        } 
        cout << "\n";
    }
}

void chars_pry1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }

        char ch = 'A';
        int break_point = (2 * i + 1) / 2;
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << ch;
            if (j < break_point) { ch++; }
            else { ch--; }
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of lines you want ";
    cin >> n;

    cout << "Approach one " << endl;
    chars_pry(n);
    cout << "\nApproach two \n";
    chars_pry1(n);

    return 0;
}