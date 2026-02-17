#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
int p=1;//position
while(n>0){
int digit=n%10;
if(p!=0){
	cout<<0;
}
else{
	cout<<5;
}
n=n/10;
p++;
}
cout<<0<<endl;
cout<<5<<endl;
}