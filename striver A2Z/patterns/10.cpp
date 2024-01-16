// * 
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<i+1; j++) cout<<"*";
        cout<<endl;
    }
    
    for (int i=0; i<rows-1; i++) {
        for (int j=rows-i; j>1; j--) cout<<"*";
        cout<<endl;
    }
    
    return 0;
}