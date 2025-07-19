#include <iostream>
using namespace std;

void pattern_star(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of line you want ";
    cin >> n;

    pattern_star(n);

    return 0;
}