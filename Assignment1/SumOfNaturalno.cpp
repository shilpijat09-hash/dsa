#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter N: ";
    cin>>N;
    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
        cout<<"Sum of first "<<N<<" Natural number is: "<<sum<<endl;
    
}