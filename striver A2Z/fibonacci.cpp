#include  <bits/stdc++.h>
using namespace std;

int main() {
    int a=0,b=1,c=0;
    cout<<"Enter the length of the sequence: ";
    int n;
    cin>>n;
    cout<<a<<endl;
    for (int i=0; i<n-1; i++) {
        c=a+b;
        a=b;
        b=c;
        cout<<a<<endl;
    }


    return 0;
}