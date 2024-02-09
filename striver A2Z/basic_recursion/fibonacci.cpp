// constraints: 1<=n<=45
#include <bits/stdc++.h>
using namespace std;

void fib(int n, vector<int>&arr) {
  if (n == 1) {
    arr.push_back(0);
    return;
  }
  if (n==2){
    fib(n-1,arr);
    arr.push_back(1);
    return;
  }
  fib(n-1,arr);
  arr.push_back(arr[n-2]+arr[n-3]);
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> arr;
    fib(n, arr);
    return arr;
}

int main()
{
    int n; // constraints: 1<=n<=45
    cin>>n;

    for (auto it:generateFibonacciNumbers(n)) {
        cout<<it<<" ";
    }
    
    return 0;

}