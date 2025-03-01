#include <iostream>
using namespace std;

void spiralMatrix(int **arr, int n, int m) {
	int left = 0, right = m - 1, top = 0, bottom = n - 1;
	while (left <= right && top <= bottom) {
		for (int i = left; i <= right; i++) { 
			cout << arr[top][i] << + " ";
		}
		top++;
		for (int i = top; i <= bottom; i++) { 
			cout << arr[i][right] << + " ";
		}
		right--;
		if (top <= bottom) {
		for (int i = right; i >= left; i--) {
			cout << arr[bottom][i] << " ";
		}
		bottom--;
		}
		if (left <= right ) {
		for (int i = bottom; i >= top; i--) {
			cout << arr[i][left] << " ";
		}
		left++;
		}
	}
}

void inputArray(int **arr, int n, int m) {
	for (int i = 0; i < n; i++ ) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
}

void printArray(int **arr, int n, int m) {
	for (int i = 0; i < n; i++ ) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
        cout << endl;
	}
}
 

int main() {
    int n, m;
    cout << "Enter rows of matrix: ";
    cin >> n;
    cout << "Enter columns of matrix: ";
    cin >> m;
    int **arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    cout << "Enter element of array : ";
    inputArray(arr, n, m);
    cout << "2D array is : " << endl;
    printArray(arr, n, m);
    cout << "Spiral order traversal: ";
    spiralMatrix(arr, n, m);

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}