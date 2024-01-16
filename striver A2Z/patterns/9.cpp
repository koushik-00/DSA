//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter an even number of rows, half of the count you want: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<rows-i-1; j++) {
            cout<<" ";
        }
        for (int k=0; k<2*i+1; k++) {
            cout<<"*";
        }
        cout<<endl;
    } 
    for (int i=rows; i>0; i--) {
        for (int j=rows-i; j>0; j--) {
            cout<<" ";
        }
        for (int k=0; k<2*i-1; k++) {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}