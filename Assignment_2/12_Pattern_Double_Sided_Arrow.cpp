#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 2 == 0) {
        cout << "N must be an odd number" << endl;
        return 0;
    }

    int n = (N + 1) / 2;

    // Upper half including middle row
    for (int i = 1; i <= n; i++) {
        // Left spaces
        for (int s = 1; s <= n - i; s++)
            cout << "  "; // 2 spaces for alignment

        // Left decreasing numbers
        for (int j = i; j >= 1; j--)
            cout << j << " ";

        // Middle spaces
        if (i > 1) {
            for (int s = 1; s <= 2 * (i - 1) - 1; s++)
                cout << "  ";
        }

        // Right increasing numbers
        if (i > 1) {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Left spaces
        for (int s = 1; s <= n - i; s++)
            cout << "  ";

        // Left decreasing numbers
        for (int j = i; j >= 1; j--)
            cout << j << " ";

        // Middle spaces
        if (i > 1) {
            for (int s = 1; s <= 2 * (i - 1) - 1; s++)
                cout << "  ";
        }

        // Right increasing numbers
        if (i > 1) {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}