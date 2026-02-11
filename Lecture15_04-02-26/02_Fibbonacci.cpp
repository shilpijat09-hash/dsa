#include<iostream>
using namespace std;
int fibbo(int g){
    //Base case
    if (g==0 || g==1) {
        return g;
    }
    return fibbo(g-1)+fibbo(g-2);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
    cout<<fibbo(i)<<" ";
    }
    return 0;
}