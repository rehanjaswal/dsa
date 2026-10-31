#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u';
}
int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < k; i++) { // create first sliding window
        if (isVowel(s[i])) {
            count++;
        }
    }
    cout << count << " ";

    for (int i = k; i < s.size(); i++) {
        if (isVowel(s[i])) {
            count++;
        }
        if (isVowel(s[i - k])) {
            count--;
        }
        cout << count << " ";
    }
    return 0;
}

// TC -> O(N)
// SC -> O(1)