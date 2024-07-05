#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {
    if (n==1) return;

    for (int i=0; i<n-1; i++) {
        if (arr[i]>arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

int main ()
{
    vector<int> arr= {13, 46, 24, 52, 20, 9};
    int n=arr.size();

    bubbleSort(arr, n);

    for (auto it:arr) cout<<it<<" ";

    return 0;
}