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
    cout<<"Enter the number the rows: ";
    cin>>rows;

    for (int i=rows; i>0; i--) {
        for (int k=rows-i; k>0; k--) {
            cout<<" ";
        }
        for (int j=0; j<2*i-1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}