//  Problem statement

// You are given a number ’n’.


// Find the number of digits of ‘n’ that evenly divide ‘n’.


// Note:

// A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.


// Example:

// Input: ‘n’ = 336

// Output: 3

// Explanation:
// 336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,temp;
    cout<<"Enter the value of n: ";
    cin>>n;
    temp=n;

    while (n) {
        int a;
        a=n%10;
        n=n/10;
        if (a&&temp%a==0)
        count++;
    }
    
    cout<<"Number of digits in "<<temp<<" that divide is: "<<count;
    

    return 0;
}