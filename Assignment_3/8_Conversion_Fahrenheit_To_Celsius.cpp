#include<iostream>
#include<cmath>
using namespace std;
int main(){
int Min;
cin>>Min;
int Max;
cin>>Max;
int Step;
cin>>Step;
int k=(Min+Max/Step)+1;
	for(int F=0;F<=Max;F=F+20){
		int C=(5/9)*(F-32);
		cout<<C;
		}
    return 0;
}