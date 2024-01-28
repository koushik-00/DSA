// reverse the number -> the reverse of the number should lie in the integer range i.e 2^-31 to 2^31-1    otherwise return 0
#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int rev=0;
        while (x) {
            int ld=x%10;
            if (rev < INT_MIN/10 || (rev==INT_MIN/10 && ld<=INT_MIN%10))
            return 0;
            if (rev > INT_MAX/10 || (rev==INT_MAX/10 && ld>=INT_MAX%10))
            return 0;
            rev=rev*10 + ld;
            x=x/10;
        }
        return rev;
}

int main()
{
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
    
}