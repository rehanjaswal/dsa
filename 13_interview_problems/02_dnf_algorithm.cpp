// sort 012
#include <bits/stdc++.h>
using namespace std;
void sortfn(vector<int>& nums, int n) {
    int l = 0, r = n - 1, i = 0;
    while (i <= r) {
        if (nums[i] == 0) {
            swap(nums[i], nums[l]);
            l++;
            i++;
        }
        else if (nums[i] == 1) {
            i++;
        }
        else {
            swap(nums[i], nums[r]);
            r--;
        }
    }
    for (int j = 0; j < n; j++) cout << nums[j] << " ";
    cout << endl;
    return;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) cin >> nums[i];

    sortfn(nums, n);
return 0;
}