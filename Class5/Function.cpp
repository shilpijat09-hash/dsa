#include<iostream>
using namespace std;
//No  Argument and No Return
void greet(){
cout<<"Hello"<<endl;
}
//Argument and No Return
void great(string name){
    cout<<"Hello "<<name<<endl;
}
//No Argument and Return
int subtract(){
    int a=10;
    int b=5;
    int c=a-b;
return c;
}
//Argument and Return
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    greet();
    great("Shilpi");
    //1st way
    int a=add(8,3);
    cout<<a<<endl;
    //2nd way
    cout<<add(8,3)<<endl;
    cout<<subtract()<<endl;
    return 0;
}
