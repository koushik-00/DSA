// 12345
// 1234
// 123
// 12
// 1

#include <bits/stdc++.h>
using namespace std; 

int main() {

    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i=rows; i>0; i--) {
        for (int j=0; j<i; j++) {
            cout<<j+1;
        }
        cout<<endl;
    }

    return 0;
}