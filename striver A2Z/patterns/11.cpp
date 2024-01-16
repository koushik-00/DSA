// 1
// 01
// 101
// 0101
// 10101

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<i+1; j++) {
            cout<<(i+j+1)%2;
        }
        cout<<endl;
    }
    
    return 0;
}