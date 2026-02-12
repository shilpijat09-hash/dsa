#include<iostream>
using namespace std;
int main(){
    int i,reverse=0;
    cout<<"Enter a number: ";
    cin>>i;
    while(i!=0)
{
    int digit=i%10;
    reverse=reverse*10+digit;
    i=i/10;
}
cout<<"Reverse Number: "<<reverse<<endl;
return 0;
}