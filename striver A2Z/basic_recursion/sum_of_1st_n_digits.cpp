// sum of 1st n digits

#include <bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n) { //non recursive
    // Write your code here.
    if (n==0) return 0;
    return (n * (n+1))/2;
}

long long sum(long long n) {// recursive
    if (n==0) return 0;
    return n + sum(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<sumFirstN(n)<<endl;

    cout<<sum(n);


    return 0;
}