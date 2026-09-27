// two pass solution
#include <bits/stdc++.h>
using namespace std;
void sort01(vector<int>& arr, int n) {
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else count1++;
    }
    int ptr = 0;
    while (count0--) {
        arr[ptr] = 0;
        ptr++;
    }
    while (count1--) {
        arr[ptr] = 1;
        ptr++;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort01(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}

