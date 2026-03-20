#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[5]={4,6,11,2,8};
int min=INT_MAX;
for(int i=0;i<5;i++){
    //minimum value
    if(arr[i]<min){
        min=arr[i];
    }
}
cout<<min<<endl;
int max=INT_MIN;
for(int i=0;i<5;i++){
//maximum value
if(arr[i]>max){
    max=arr[i];
}
}
cout<<max<<endl;
return 0;
}

