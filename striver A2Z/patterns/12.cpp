// 1      1
// 12    21
// 123  321
// 12344321

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<i+1; j++) {
            cout<<j+1;
        }
        for (int k=0; k<rows-i-1; k++) {
            cout<<"  ";
        }
        for (int j=i+1; j>0; j--) {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}