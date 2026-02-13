#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        // leading spaces
        for (int s = 1; s <= N - i; s++) {
            cout << " ";
        }
        // stars
        if (i == 1 || i == N) {
            for (int j = 1; j <= N; j++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int j = 1; j <= N - 2; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}