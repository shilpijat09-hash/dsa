#include<iostream>
using namespace std;
int main(){
    //Create
    //First way
    int arr[5]; //By default garbage value hogi aur baad me hum change kar sakte hai
    //Second way
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;
    int arr_b[]={1,2,3,4,5}; //Phele se initialize hai aur baad me change bhi kar sakte hai
    //Third way
    int n;
    cin>>n;
    int arr_c[n]; //By default garbage value aur baad me change kar sakte hai

    //Read
    int s=sizeof(arr_b)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr_b[i]<<" ";
    }

    //Update
    for(int i=0;i<s;i++){
        arr[i]+=i;
    }
    cout<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}