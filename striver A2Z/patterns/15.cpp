// ABCDE
// ABCD
// ABC
// AB
// A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        char c=65;
        for (int j=rows-i; j>0; j--) {
            cout<<c;
            c++;
        }
        cout<<endl;
    }

    return 0;
}