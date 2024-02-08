// we have to print some word n times using recursion

#include <bits/stdc++.h>
using namespace std;

vector <string> printNTimes (int n) {
    vector <string> arr;

    if (n>0){
        arr=printNTimes(n-1);
        arr.push_back("Koushik ");
    }

    return arr;
}

int main() 
{
    int n;
    cin>>n;

    vector <string> a = printNTimes(n);

    for (auto it : a) {
        cout<<it<<endl;
    }

    return 0;
}