#include <iostream>
using namespace std;
int findIndex(int arr[], int n, int M){
    for(int i = 0; i < n; i++){
        if(arr[i] == M){
            return i;
        }
    }
    return -1;   
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int M;
    cin >> M;
    int result = findIndex(arr, n, M);
    cout << result;
    return 0;
}