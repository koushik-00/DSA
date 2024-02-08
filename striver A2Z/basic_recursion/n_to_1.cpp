// print from n to 1 using recursion
#include <bits/stdc++.h>
using namespace std;

void fxn (int i, vector<int>& arr) {
    if (i==0) return;
    arr.push_back(i);
    fxn(i-1, arr);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> arr;
    fxn(x, arr);
    return arr;
    
}

int main()
{
    int n;
    cin>>n;

    for (auto it:printNos(n)) {
        cout<<it<<" ";
    }
    
    return 0;
}