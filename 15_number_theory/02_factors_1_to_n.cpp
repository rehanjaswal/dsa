#include <bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    cin >> N;
    vector<vector<int>> factors(N + 1);
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            factors[j].push_back(i);
        }
    }
    for (int i = 1; i <= N; i++) {
        cout << i << " -> ";
        for (int factor : factors[i]) {
            cout << factor << " ";
        }
        cout << endl;
    }
}
int main() {
    solve();
    return 0;
}
