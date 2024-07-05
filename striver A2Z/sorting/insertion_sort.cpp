#include <bits/stdc++.h>
using namespace std;

int main () 
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();

    for (int i=0; i<n; i++) {
        int j=i;
        while (j && arr[j-1]>arr[j]) {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
    for (auto it:arr) {
        cout<<it<<" ";
    }

    return 0;
}