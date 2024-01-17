//    A
//   ABA
//  ABCBA
// ABCDCBA

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        char c=65;
        for (int l=0; l<rows-i-1; l++) {
            cout<<" ";
        }
        for (int j=0; j<i+1; j++) {
            cout<<c;
            c++;
        }
        c--;
        for (int k=0; k<i; k++) {
            c--;
            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}