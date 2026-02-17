#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N1;
    cin>>N1;
    int N2;
    cin>>N2;
    int og;//original
    if(N1<og<N2){
    int temp=n;
    int sum=0;
    //Digit calculate karna
    int l=0;
    while(temp!=0){
        temp=temp/10;
        l++;
    }
    //Power nikalna and add karna
    while(n!=0){
        int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
    //Compare karna
    if(og==sum){
        cout<<og<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
    return 0;
}