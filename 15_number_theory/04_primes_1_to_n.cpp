#include <bits/stdc++.h>
using namespace std;
bool isPrime(int factorCount) {
    return factorCount == 2;
}
void primes() {
    int n;
    cin >> n;
    vector<int> factors(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            factors[j]++;
        }
    }
    cout << "primes from 1 to " << n << " are - ";
    for (int i = 1; i <= n; i++) {
        if (isPrime(factors[i])) {
            cout << i << " ";
        }
    }
}
int main() {
    primes();
return 0;
}