#include <iostream>
using namespace std;

void iterativeSolution(int n, int i) {
    // For loop
    for (i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    // While loop
    while (i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
}

void recursiveSolution(int n, int i) {
    // Recursive approach
    if (i > 10) return;

    cout << n << " x " << i << " = " << n * i << endl;
    recursiveSolution(n, i + 1);
}

int main() {
    int n;
    cin >> n;
    cout << endl;

    iterativeSolution(n, 1);
    recursiveSolution(n, 1);

    return 0;
}
