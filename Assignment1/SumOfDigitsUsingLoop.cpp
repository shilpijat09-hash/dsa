#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    int sum=0;
    while(N>0){
        int digit=N%10;
        sum +=digit;
        N=N/10;
    }
    cout<<"Sum of digit is: "<<sum<<endl;
    return 0;
}