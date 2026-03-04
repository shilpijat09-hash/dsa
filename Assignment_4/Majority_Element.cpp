#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}
int main() {
    int N;
    cin>>N;
    vector<int> nums={1,1,2};
     for(int i = 0; i < N; i++){
    cout<<majorityElement(nums)<<endl;
	}
    return 0;
}