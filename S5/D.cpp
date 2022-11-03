#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k; cin >> n >> k; k++;
    vector<bool> a(n, true);
    int r = 1, c = 0;
    for (int i = 0; c<n; i++, i%=n) {
        r %= k;
        if (!r) {
            if (a[i]) {
                cout << i + 1 << ' '; c ++;
                a[i] = false;
                r++;
            }
        }
        r = a[i] ? r+1: r;
    }
    cout << endl;
    return 0;
}