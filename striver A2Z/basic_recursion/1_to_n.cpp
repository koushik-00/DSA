// print from 1 to n  without using loops i.e. using recursion

#include <bits/stdc++.h>
using namespace std;

vector <int> printNos (int n) {
    vector <int> arr;

    if (n>0){
        arr=printNos(n-1);
        arr.push_back(n);
    }

    return arr;
}

int main() 
{
    int n;
    cin>>n;

    vector <int> a = printNos(n);

    for (auto it : a) {
        cout<<it<<endl;
    }

    return 0;
}