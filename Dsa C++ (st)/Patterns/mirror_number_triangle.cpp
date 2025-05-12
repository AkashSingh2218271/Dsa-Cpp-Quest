#include <iostream>
using namespace std;

void mirror_num(int n) {
    int s = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }

        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        s -= 2;

        for (int j = i; j >= 0; j--)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of lines you want ";
    cin >> n;

    mirror_num(n);

    return 0;
}