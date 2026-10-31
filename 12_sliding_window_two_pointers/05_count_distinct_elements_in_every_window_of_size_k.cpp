#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    
    unordered_map<int, int> freq;
    // first window
    for (int i = 0; i < k; i++) {
        freq[nums[i]]++;
    }
    cout << freq.size() << " ";
    // move to further windows
    for (int i = k; i < n; i++) {
        freq[nums[i - k]]--;                                 // remove outgoing element
        if (freq[nums[i - k]] == 0) freq.erase(nums[i - k]); // delete the key if its value is zero
        freq[nums[i]]++;                                       // include incoming element
        cout << freq.size() << " ";
    }

}
int main() {
    solve();
return 0;
}