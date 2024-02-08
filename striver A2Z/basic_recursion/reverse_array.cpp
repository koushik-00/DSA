#include <bits/stdc++.h>
using namespace std;

vector<int> rev(int n, int l, int r, vector<int> &nums) {
    if (l>=r) return nums;
    swap (nums[l], nums[r]);
    return rev(n, l+1, r-1, nums);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    return rev(n, 0, n-1, nums);

}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    for (auto it: reverseArray(a.size(), a)) {
        cout<<it<<" ";
    }

    return 0;
}