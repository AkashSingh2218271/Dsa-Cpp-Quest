#include <iostream>
using namespace std;

void pattern_number(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
    
}

void pattern_number1(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }
    
}

int main() {
    int n;
    cout << "Enter the number of lines you want to print ";
    cin >> n;

    cout << "pattern one \n";
    pattern_number(n);
    cout << "pattern two \n";
    pattern_number1(n);
    return 0;
}