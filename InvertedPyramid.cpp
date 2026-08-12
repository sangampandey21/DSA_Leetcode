#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}