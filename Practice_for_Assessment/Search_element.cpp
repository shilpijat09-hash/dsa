#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int index=-1;
    int target;
    cin>>target;
    for(int i=0;i<=n;i++){
        if(arr[i]==target){
            index=i;
            cout<<index<<" ";
        }
    }
    return -1;
}