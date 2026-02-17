#include<iostream>
using namespace std;
int main() {
	int n1;
	cin>>n1;
	int n2;
	cin>>n2;
	int n=1;
    int count=0;
	while (n1>count){
		int s=3*n+2;
		if(s%n2!=0){
   cout<<s<<endl;
   count++;
        }
   n++;
	}
	return 0;
}