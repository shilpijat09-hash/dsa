#include <iostream>
#include <vector>
using namespace std;
void inverse(vector<int>&arr,vector<int>&inv,int index,int n){
    if(index==n)
        return ;
    inv[arr[index]]=index;  // swap index and value
    inverse(arr,inv,index+1,n);
}
int main() {
    int N;
    cin >> N;
    vector<int>arr(N),inv(N);
    for (int i=0;i<N;i++) {
        cin>>arr[i];
    }
    inverse(arr,inv,0,N);
    for (int i=0;i<N;i++) {
        cout<<inv[i]<<" ";
    }
    return 0;
}