#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>=90){
        cout<<"A Grade";
    }
    else if(marks>=80){
        cout<<"B Grade";
    }
    else if(marks>=70){
        cout<<"C Grade";
    }
    else if(marks>=60){
        cout<<"D Grade";
    }
    else
    cout<<"Fail,Work Hard";
    return 0;
}