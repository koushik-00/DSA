#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n) {
    int sum=0, temp=n,t=n,count=0;
	while (temp){
		temp/=10;
		count++;
	}
	while (n) {
		sum = sum + pow(n%10,count);
		n=n/10;
	}
	if (t==sum) return true;
	return false;
}

int main()
{
    int n;
    cin>>n;
    cout<<armstrong(n)<<endl;

    return 0;
}