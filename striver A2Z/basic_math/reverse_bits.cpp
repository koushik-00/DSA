// leetcode 190
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    uint32_t a, rev=0,temp;
    cin>>a;
    temp=a;

    for (int i=0; i<32; i++) {
        rev=rev << 1;
        rev=rev | ( a & 1 );
        a=a >> 1;
    }

    cout<<"Reverse of "<<temp<<" : "<<rev<<endl;
    cout<<a;

//sample input 00000010100101000001111010011100
    return 0;
}