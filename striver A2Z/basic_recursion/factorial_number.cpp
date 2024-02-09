#include <bits/stdc++.h>
using namespace std;

void fxn(long long i, long long n, long long& mul, vector<long long>& arr) {
    if (mul*i <= n) {
        mul=mul*i;
        arr.push_back(mul);
        fxn(i+1, n, mul, arr);
    }
    else return;
    
}
vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    long long mul =1;
    vector<long long> arr;
    fxn(1,n,mul,arr);
    return arr;
}

int main() 
{
    int n;
    cin>>n;

    for (auto it:factorialNumbers(n)) {
        cout<<it<<" ";
    }
    
    return 0;
}