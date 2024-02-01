#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    if (y==0)
        return x;
    return gcd(y, x%y);
}

int main() 
{
    int a, b;
    cin>>a>>b;

    cout<<"GCD of "<<a<<", "<<b<<" : "<<gcd(a,b);
    
    return 0;
}