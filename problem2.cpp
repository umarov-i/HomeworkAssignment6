#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    int arrRow[m];
    int arrColumn[n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += arr[i][j];
        }
        arrRow[i] = sum / n;
    }
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += arr[i][j];
        }
        arrColumn[i] = sum / m;
    }
    for (int i = 1; i < m; i++) {
        if (arrRow[i] != arrRow[0]) {
            cout << "NO";
            return 0;
        }
    }
    for (int i = 1; i < n; i++) {
        if (arrColumn[i] != arrColumn[0]) {
            cout << "NO";
            return 0;
        }
    }
    if (arrRow[0] != arrColumn[0]) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;

    return 0;
}