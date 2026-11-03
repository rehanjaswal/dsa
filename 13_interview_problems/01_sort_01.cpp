// // two pass solution
// #include <bits/stdc++.h>
// using namespace std;
// void sort01(vector<int>& nums) {
//     int count0 = 0, count1 = 0;
//     int n = nums.size();
//     for (int i = 0; i < n; i++) {
//         if (nums[i] == 0) count0++;
//         else count1++;
//     }
//     int ptr = 0;
//     while (count0--) {
//         nums[ptr] = 0;
//         ptr++;
//     }
//     while (count1--) {
//         nums[ptr] = 1;
//         ptr++;
//     }

//     for (int i = 0; i < n; i++) cout << nums[i] << " ";
//     cout << endl;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) cin >> nums[i];
//     sort01(nums);
//     return 0;
// }


// one pass solution (two pointers) TC -> O(N)

#include <bits/stdc++.h>
using namespace std;
void sort01() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int l = 0, r = n - 1;
    while (l <= r) {
        if (nums[l] == 0) {
            l++;
        }
        else {
            swap(nums[l], nums[r]);
            r--;
        }
    }
    for (int i = 0; i < n; i++) cout << nums[i] << " ";
}
int main() {
    sort01();
    return 0;
}