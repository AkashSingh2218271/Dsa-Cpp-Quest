#include <iostream>
using namespace std;

void hollow_rec(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i) - 2; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void hollow_rec1(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    int spaces = (2 * n) - 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of line you want ";
    cin >> n;

    cout << "Approach one \n";
    hollow_rec(n);
    cout << "\nApproach two \n";
    hollow_rec1(n);

    return 0;
}