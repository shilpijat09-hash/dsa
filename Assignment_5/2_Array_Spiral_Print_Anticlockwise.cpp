#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin >> m >> n;
    int a[10][10];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];
    int top=0, bottom=m-1;
    int left=0, right=n-1;
    while(left<=right && top<=bottom)
    {
        // first column
        for(int i=top;i<=bottom;i++)
            cout<<a[i][left]<<", ";
        left++;
        // last row
        for(int i=left;i<=right;i++)
            cout<<a[bottom][i]<<", ";
        bottom--;
        // last column
        if(left<=right){
            for(int i=bottom;i>=top;i--)
                cout<<a[i][right]<<", ";
            right--;
        }
        // first row
        if(top<=bottom){
            for(int i=right;i>=left;i--)
                cout<<a[top][i]<<", ";
            top++;
        }
    }
    cout<<"END";
}