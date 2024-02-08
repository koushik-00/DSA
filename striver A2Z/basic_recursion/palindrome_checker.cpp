#include <bits/stdc++.h>
using namespace std;

bool pal(int i,string& str) {
    if (i>=str.size()/2) return true;
    if (str[i]!=str[str.size()-i-1]) return false;
    pal(i+1, str);
}
bool isPalindrome(string& str) {
    // Write your code here.
    return pal(0,str);
}

int main()
{
    string s;
    cin>>s;

    cout<<isPalindrome(s);

    return 0;
}