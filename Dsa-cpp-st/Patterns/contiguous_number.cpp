#include <iostream>
using namespace std;

void contiguous_num(int n) {
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << x++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number lines you want ";
    cin >> n;

    contiguous_num(n);

    return 0;
}