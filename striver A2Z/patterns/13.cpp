// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    int count=1;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<i+1; j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}