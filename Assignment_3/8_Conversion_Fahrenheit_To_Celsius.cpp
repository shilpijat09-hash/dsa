#include<iostream>
#include<cmath>
using namespace std ;
int main() {
	int min;
	cin>>min;
	int max;
	cin>>max;
	int step;
	cin>>step;
	for(int F=min;F<=max;F+=step){
	int celsius = (F - 32.0) * 5.0 / 9.0;
	cout<<F<<" "<<celsius<<endl;
	}
	return 0;
}