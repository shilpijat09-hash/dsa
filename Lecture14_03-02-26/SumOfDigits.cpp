#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n!=0){
        int k=n%10;
        sum=sum+k;
        n/=10;
    }
    //abs=absolute
    cout<<abs(sum)<<endl;
    return 0;
}