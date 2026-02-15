#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int digit;
	cin>>digit;
	int count=0;
	while(n>0){
		int last=n%10;
		if(last==digit){
			count++;
	}
	n=n/10;
	}
	cout<<count;
}