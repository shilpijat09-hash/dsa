#include<iostream>
using namespace std;
int digitsum(int N){
int sum =0;
while(N!=0){
    int k=N%10;
    sum+=k;
    N/=10;
}
return sum;
}
bool prime(int N){
    for(int i=2;i*i<=N;i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    cin>>N;
    int sum=0;
    int factor=0;
    sum=digitsum(N);
    for(int i=2;i<=N;i++){
        while(N%i==0){
            if(prime(i)){
                factor+=digitsum(i);
            }
            N=N/i;
        }
    }
    if(sum==factor){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}