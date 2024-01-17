// E
// DE
// CDE
// BCDE
// ABCDE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        char c=70;
        for (int j=i+1; j>0; j--) {
            cout<<char(c-j);
        }
        cout<<endl;
    }

    return 0;
}