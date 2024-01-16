// left pyramid of numbers starting from 1
// 1
// 12
// 123
// 1234
// 12345

#include <bits/stdc++.h>
using namespace std;

int main() {

    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<i+1; j++) {
            cout<< j+1;
        }
        cout<<endl;
    }

    return 0;
}