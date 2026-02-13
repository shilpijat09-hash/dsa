#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int totalRows = 2 * N + 1; // total rows

    for (int i = 0; i < totalRows; i++) {
        int limit = (i <= N) ? i : totalRows - i - 1; // elements on one side

        // Left decreasing numbers
        for (int j = N; j > N - limit - 1; j--) {
            cout << j << " ";
        }

        // Middle spaces
        int spaces = (N - limit) * 2 - 1;
        if (spaces > 0) {
            for (int s = 0; s < spaces; s++)
                cout << "  "; // double space for alignment
        }

        // Right increasing numbers
        int start = (i == N) ? 0 : N - limit;
        for (int j = start; j <= N; j++) {
            if (!(i == N && j == 0)) // avoid double 0 in middle
                cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}