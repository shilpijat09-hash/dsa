#include <iostream>
#include <vector>
using namespace std;
void wavePrintRowWise(int M, int N, vector<vector<int>>& arr) {
    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                cout << arr[i][j] << ", ";
            }
        } 
        else {
            for (int j = N - 1; j >= 0; j--) {
                cout << arr[i][j] << ", ";
            }
        }
    }
    cout << "END" << endl;
}
int main() {
    int m, n;
    cin>>m;
    cin>>n;
    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    wavePrintRowWise(m, n, arr);
    return 0;
}