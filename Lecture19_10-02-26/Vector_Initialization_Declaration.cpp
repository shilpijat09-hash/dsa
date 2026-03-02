#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec;  size=0, koi element stored nahi hai isliye bydefault size zero
    // cout<<vec[0]<<endl;


// vector<int>vec={1,2,3};  size=3
// cout<<vec[0]<<endl;

// vector<int>vec(5,0);  5 is size of vector, 0 is index value
// cout<<vec[0]<<endl;
// cout<<vec[1]<<endl;
// cout<<vec[2]<<endl;
// cout<<vec[3]<<endl;
// cout<<vec[4]<<endl;

vector<char>vec={'a','b','c','d','e'};
for(char val:vec){   //for each loop
    cout<<val<<endl;
}
    return 0;
}