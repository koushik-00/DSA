// leetcode 190
#include <bits/stdc++.h> 
using namespace std;

uint32_t reverseBits(uint32_t n) {
    int res = 0;
    
    for ( int i = 0; i < 32; i++ ) {
        res = res << 1;
        res = res | ( n & 1 );
        n = n >> 1;
    }
    return res;
}

int main()
{
    uint32_t a,temp;
    cin>>a;
    int rev = 0;
    temp=a;

    // for (int i=0; i<32; i++) {
    //     rev=rev << 1;
    //     rev=rev | ( a & 1 );
    //     a=a >> 1;
    // }

    cout<<"Reverse of "<<temp<<" : "<<reverseBits(a)<<endl;
    cout<<a;

//sample input 00000010100101000001111010011100
    return 0;
}