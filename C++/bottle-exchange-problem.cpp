#include <iostream>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int emptyBottles = numBottles;
    while (emptyBottles >= numExchange) {
        numBottles += emptyBottles / numExchange;
        emptyBottles = (emptyBottles / numExchange) + (emptyBottles % numExchange);
    }
    return numBottles;
}

int main() {
    int numBottles, numExchange;

    cout << "numBottles: ";
    cin >> numBottles;
    cout << "numExchange: ";
    cin >> numExchange;

    cout << numWaterBottles(numBottles, numExchange) << endl;

    return 0;
}
