// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<i+1; j++) {
            cout<<"*";
        }
        for (int k=rows-i-1; k>0; k--) {
            cout<<"  ";
        }
        for (int l=0; l<i+1; l++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i=0; i<rows-1; i++) {
        for (int j=rows-i-1; j>0; j--) {
            cout<<"*";
        }
        for (int k=0; k<i+1; k++) {
            cout<<"  ";
        }
        for (int l=rows-i-1; l>0; l--) {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}