#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=n;i>=1;i--) {
        for (int k=0;k<n-i;k++)
            cout<< "  ";
        for (int j=i;j>=0;j--)
            cout<<j<< " ";
        for (int j=1;j<=i;j++)
            cout<<j<< " ";
         cout<< endl;
    }
    for (int k=0;k<n;k++)
        cout<< "  ";
        cout<<0<<endl;
    for (int i=1;i<=n;i++) {
        for (int k=0;k<n-i;k++)
            cout<< "  ";
        for (int j=i;j>=0;j--)
            cout<<j<< " ";
        for (int j=1;j<=i;j++)
            cout<<j<<" ";
          cout<<endl;
    }
    return 0;
}