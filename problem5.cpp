#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b, c, e, d;
    cin >> a >> b >> c >> e >> d;
    vector<bool> affected(d + 1, false);
    for (int i = a; i <= d; i += a) affected[i] = true;
    for (int i = b; i <= d; i += b) affected[i] = true;
    for (int i = c; i <= d; i += c) affected[i] = true;
    for (int i = e; i <= d; i += e) affected[i] = true;
    int affectedDragons = 0;
    for (int i = 1; i <= d; ++i) {
        if (affected[i]) affectedDragons++;
    }
    cout << affectedDragons << endl;
    return 0;
}