#include <iostream>
#include <vector>
using namespace std;

bool canParkCars(vector<int>& parkingSpots, int n) {
    int parkedCars = 0;
    for (int i = 0; i < parkingSpots.size(); ++i) {
        if (parkingSpots[i] == 0 &&
        (i == 0 || parkingSpots[i - 1] == 0) &&
        (i == parkingSpots.size() - 1 || parkingSpots[i + 1] == 0)) {
            parkingSpots[i] = 1;
            parkedCars++;
            if (parkedCars >= n) return true;
            i++;
        }
    }
    return parkedCars >= n;
}

int main() {
    int n;
    cin >> n;
    vector<int> parkingSpots;
    int spot;
    while (cin >> spot) {
        parkingSpots.push_back(spot);
    }
    if (canParkCars(parkingSpots, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}