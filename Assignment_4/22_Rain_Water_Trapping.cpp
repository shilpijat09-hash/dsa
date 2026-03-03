#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 int trap(vector<int>& height) {
    int n=height.size();
int ans=0;
int left=0;
int right=n-1;
int leftmax=0,rightmax=0;
while(left<right){
    leftmax=max(leftmax,height[left]);
    rightmax=max(rightmax,height[right]);
    if(leftmax<rightmax){
        ans+=leftmax-height[left];
        left++;
    }
    else{
ans+=rightmax-height[right];
        right--;
    }
}
return ans;
 }
    int main(){

return 0;
}