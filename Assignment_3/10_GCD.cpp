#include<iostream>
using namespace std;
int gcd(int N1,int N2){
    while(N2!=0){
        int t=N1%N2;
        N1=N2;
        N2=t;
    }
    return N1;
}
//Normal way
int main(){
    int N1,N2;
    cin>>N1>>N2;
    while(N2!=0){
        int t=N1%N2;
        N1=N2;
        N2=t;
    }
    cout<<gcd(N1,N2);
    return 0;
} 