// TC -> O(logn) and SC -> O(1)
#include <bits/stdc++.h>
using namespace std;
bool search(vector<int>& nums, int n, int target) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] == target) {
            return true;
        }
        if (nums[mid] < target) {
            // search on the right
            l = mid + 1;
        }
        else {
            // search on the left
            r = mid - 1;
        }
    }
    return false;
}
int main() {
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    if (search(nums, n, target) == 1) cout << "yes";
    else cout << "no";

return 0;
}