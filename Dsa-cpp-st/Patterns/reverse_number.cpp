#include <iostream>
using namespace std;

void reverse_num(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    
} 

int main() {
    int n;
    cout << "Enter the number of lines you want ";
    cin >> n;

    reverse_num(n);
    
    return 0;
}