// ****
// *  *
// *  *
// ****

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        if (i==0 || i==rows-1) {
            for (int j=0; j<rows; j++) {
                cout<<"*";
            }
        }
        else {
            cout<<"*";
            for (int k=1; k<rows-1; k++) {
                cout<<" ";
            }
            cout<<"*";
        }
        
        cout<<endl;
    }

    return 0;
}