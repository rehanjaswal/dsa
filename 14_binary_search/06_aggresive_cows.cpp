// TC -> O(n * log(stalls[n - 1] - stalls[0]))
#include <bits/stdc++.h>
using namespace std;

int isValid(vector<int>& stalls, int k, int gap) {
    int n = stalls.size(), cowsPlaced = 1, prevCow = stalls[0];
    for (int i = 1; i < n; i++) {
        if (stalls[i] - prevCow >= gap) {
            cowsPlaced++;
            prevCow = stalls[i];
        }
    }
    return (cowsPlaced >= k);
}

int aggressiveCows(vector<int>& stalls, int k) {
    int n = stalls.size(), low = 0, high = stalls[n - 1] - stalls[0], ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (isValid(stalls, k, mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++) cin >> stalls[i];

    cout << aggressiveCows(stalls, k) << endl;
return 0;
}