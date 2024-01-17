// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        for (int j=rows-i; j>0; j--) {
            cout<<"*";
        }
        for (int j=0; j<i; j++) {
            cout<<"  ";
        }
        for (int k=rows-i; k>0; k--) {
            cout<<"*";
        }
        cout<<endl;
    }

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

    return 0;
}