#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //space 
        for (int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        for (int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        
        for (int j=1;j<=i-2;j++){
            cout<<"  ";
        }
        if(i!=1){
        for (int j=n-i+1;j>=1;j--){
            cout<<"* ";
        }}
        else{
            for (int j=n-i+1-1;j>=1;j--){
            cout<<"* ";
        }}
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        //space 
        for (int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        for (int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        
        for (int j=1;j<=i-2;j++){
            cout<<"  ";
        }
        if(i!=1){
        for (int j=n-i+1;j>=1;j--){
            cout<<"* ";
        }}
        else{
            for (int j=n-i+1-1;j>=1;j--){
            cout<<"* ";
        }}
        cout<<endl;
    }
    return 0;
}