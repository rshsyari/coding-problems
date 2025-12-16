#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;  // number of test cases

    for (int k = 0; k < t; k++) {
        cin >> n;  // height of current pyramid

        for (int i = 1; i <= n; i++) {
            // print spaces
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            // print stars
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "*";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
