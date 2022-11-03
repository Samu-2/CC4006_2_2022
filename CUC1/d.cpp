#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumat(ll n) {
    return ((n*(n+1))/2);
}

ll inter (ll n, vector<ll> &mem) {
    ll ret;
    if (mem[n] == -1) {
        mem[n] = inter(n-1, mem) + n;
    }
    return mem[n];
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> v(n); for(auto &x: v) cin >> x;
    set<pair<int, int>> f;
    vector<ll> fac(n+1, -1);
    fac[0] = 0;
    int asd = inter(9, fac);
    1;
    for (int indx=0; indx<m; indx++) {
        int a, b; cin >> a >> b;
        int x, y;
        x = min(a, b);
        y = max(a, b);
        pair<int, int> p(x, y);
        f.insert(p);
    }
    ll ret  = 0;
    int len = 0;
    int a   = v[0];
    for (auto &b: v) {
        int x, y;
        x = min(a, b);
        y = max(a, b);
        pair<int, int> p(x, y);
        bool con = f.find(p) == f.end();
        if (con){
            len++;
        }
        else {
            ll suma = sumat(n);
            ret += inter(len, fac);
            len = 0;
        }
        a = b;
    }
    ret += inter(len, fac);
    cout << asd << endl;

    return 0;
}
/*
4 2
1 3 2 4
3 2
2 4

*/
