#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(int x) {
    if (x<0) return false;
        long rev=0,temp=x;
        while (x) {
            rev = rev * 10 + x % 10;
            x = x/10;
        }
        if (rev == temp) return true;
        return false;
}

int main()
{
    int n;
    cin>>n;

    cout<<check_palindrome(n)<<endl;

    return 0;
}