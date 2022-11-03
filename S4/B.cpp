#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll i, ll n, vector<ll> &a, vector<ll> &m) {
    if (i>=n) return 0;
    if (m[i] > 0) return m[i];
    else 
        m[i] += f(i+a[i], n, a, m) + a[i];
    return m[i];
}

int main() {
    ll t; cin >> t;
    for (int indx = 0; indx<t; indx++) {
        ll n; cin >> n; 
        vector<ll> a(n); for(auto &x:a) cin >> x;
        vector<ll> m(n, 0);
        ll max = 0;
        for(int j = 0; j<n; j++) {
             ll k = f(j, n, a, m);
            max = k > max ? k : max;
        }
        cout << max << endl;
    }
}

