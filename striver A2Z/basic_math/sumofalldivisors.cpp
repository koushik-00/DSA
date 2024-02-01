#include <bits/stdc++.h>
using namespace std;

int approach_1 (int n) {  // time complexity is O(n*sqrt(n)) here n is the number of divisors of a number
    int sum=0; 
    for (int i=1; i<=n; i++) {
        for (int j=1; j*j<=i; j++) {
            if (i%j==0) {
                if (j!=i/j) {
                    sum += j + i/j;
                }
                else sum += j;
            }
        }
    }

    return sum;
}

int optimal_approach(int n) {  //time complexity is O(sqrt(n))  n is the number of the divisors
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum+=i*(n/i);
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<approach_1(n)<<endl<<optimal_approach(n)<<endl;
    
    return 0;
}