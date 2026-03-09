#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
int count0 = 0, count1 = 0;
    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 0)
            count0++;
        else
            count1++;
    }
    for(int i = 0; i < count0; i++)
        cout << "0 ";

    for(int i = 0; i < count1; i++)
        cout << "1 ";

    return 0;
}