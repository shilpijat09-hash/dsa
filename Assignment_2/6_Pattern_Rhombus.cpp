#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // left pattern
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<" ";   
        }
        //right pattern
       for(int j=2*i-2;j>=i;j--){
            cout<<j<<" "; 
         }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // left pattern
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<" ";   
        }
        //right pattern
       for(int j=2*i-2;j>=i;j--){
            cout<<j<<" "; 
         }
        cout<<endl;
    }
    return 0;
}