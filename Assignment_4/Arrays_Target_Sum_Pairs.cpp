#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(arr[i] + arr[j] == target) {
                if(arr[i] < arr[j])
                    cout << arr[i] << " and " << arr[j] << endl;
                else
                    cout << arr[j] << " and " << arr[i] << endl;
            }
        }
    }

    return 0;
}