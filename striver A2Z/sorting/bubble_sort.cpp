#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();

    for (int i=0; n-i>0; i++) {
        int didswap=0;
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didswap=1;
            }
        }
        if (didswap==0) break;
    }

    for (auto it:arr) {
        cout<<it<<" ";
    }
    
    return 0;
}