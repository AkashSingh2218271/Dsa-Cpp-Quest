#include <iostream>
using namespace std;

void pattern_star(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
}
int main() {
    int n;
    cout << "Enter the number of lines you want to print ";
    cin >> n;

    pattern_star(n);

    return 0;
}