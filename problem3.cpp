#include <iostream>
using namespace std;

int main() {
    int m, n, t;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int row, col, newValue;
        cin >> row >> col >> newValue;
        arr[row - 1][col - 1] = newValue;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}