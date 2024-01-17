// A
// AB
// ABC
// ABCD
// ABCDE

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    

    for (int i=0; i<rows; i++) {
        char c='A';
        for (int j=0; j<i+1; j++) {
            cout<<c;
            c++;
        }
        cout<<endl;
    }
    
    return 0;
}