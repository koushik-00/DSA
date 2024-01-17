// A
// BB
// CCC
// DDDD
// EEEEE

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    char c=65;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<i+1; j++) {
            cout<<c;
        }
        c++;
        cout<<endl;
    }

    return 0;
}