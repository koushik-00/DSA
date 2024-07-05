#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int i=low, j=high, pivot=low;
    while (i<j) {
        while (arr[i]<=arr[pivot] && i<=high) {
            i++;
        }
        while (arr[pivot]<arr[j] && j>=low) {
            j--;
        }
        if (i<j) {
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[pivot], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low<high) {
        int pIndex=partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}

int main() 
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();

    quickSort(arr, 0, n-1);

    for (auto it:arr) cout<<it<<" ";
    
    return 0;
}