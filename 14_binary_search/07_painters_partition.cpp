#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int>& boards, int k, long long timeLimit) {
    int painters = 1;
    long long currentWork = 0;
    for (int i = 0; i < boards.size(); i++) {
        if (currentWork + boards[i] <= timeLimit) {
            currentWork += boards[i];
        }
        else {
            painters++;
            currentWork = boards[i];
        }
    }
    return (painters <= k);
}

int paintersPartition(vector<int>& boards, int k) {
    long long low = *max_element(boards.begin(), boards.end());
    long long high = accumulate(boards.begin(), boards.end(), 0LL);
    long long ans = high;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (isValid(boards, k, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> boards(n);
    for (int i = 0; i < n; i++) cin >> boards[i];

    cout << paintersPartition(boards, k) << endl;
return 0;
}