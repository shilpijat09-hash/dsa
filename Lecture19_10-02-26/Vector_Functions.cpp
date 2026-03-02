#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<vec.size()<<endl;  //size of vector
    vec.push_back(6);  //to add element at last
    cout<<"size after push back "<<vec.size()<<endl;
    vec.pop_back();  //to delete element from last
    // for(int val: vec){
    //     cout<<val<<endl;
    //}
    cout<<vec.front()<<endl;  //to print first element
    cout<<vec.back()<<endl;  //to print last element
    cout<<vec.at(3)<<endl;  //to print element of particular index
    return 0;
}