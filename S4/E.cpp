#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* #=#=#=#=#=#  TYPEDEF  #=#=#=#=#=# */
typedef long long ll;
typedef double    ld;
// multiset
typedef multiset<int> m_i;
typedef multiset<ll>  m_ll;
typedef multiset<ld>  m_ld;
#define m_p(pair, var) (multiset<pair>) 
// vector
typedef vector<char> v_c;
typedef vector<int>	 v_i;
typedef vector<ll> 	 v_ll;
typedef vector<ld>   v_ld;
#define v_p(pair, var) (vector<pair>)
// set
typedef set<int>    s_i;
typedef set<ll>     s_ll;
typedef set<ld>     s_ld;
#define s_p(pair, var) (set<pair>)
// pair
typedef pair<int,int> i_i;
typedef pair<ll, ll> ll_ll;
typedef pair<ld, ld> ld_ld;
#define _p(type1, type2) (pair<type1, type2>)

ll f(v_i &v, v_ll &m, int n, int l, int r, int a){
    ll i = l*5000 + r;
    
    if (l > r) return 0;
    if (m[i] > 0) return m[i];
    else {
        ll e;
        // Ya se escogio por kaladin a
        // a : 1 = der, -1 = izq
        e = a > 0 ? r : l;
        r = a > 0 ? r-1 : r;
        l = a > 0 ? l : l+1;
        // Ahora veremos que escoge teft
        if (v[l] == v[r]) {
            // Tiene la ventaja, aca puede tomar
            // el peor resultado para kaladin

            // Verificamos toma l
            ll m1 = max(f(v, m, n, l+1, r, -1), f(v, m, n, l+1, r, 1)) + v[e];
            // Verificamos toma r
            ll m2 = max(f(v, m, n, l, r-1, -1), f(v, m, n, l, r-1, 1)) + v[e];
            // FUCK KALADIN!
            m[i] = min(m1, m2);
        }
        if (v[l] > v[r]) {
            // Tomo l
            m[i] = max(f(v, m, n, l+1, r, -1), f(v, m, n, l+1, r, 1)) + v[e];
        }
        if (v[l] < v[r]) {
            m[i] = max(f(v, m, n, l, r-1, -1), f(v, m, n, l, r-1, 1)) + v[e];
        }
    }
    return m[i];
}

int main() {
    int n; cin >> n;
    v_ll m((n)*(n+1), 0); 
    v_i  v(n); for(auto &x: v) cin >> x;
    ll m1 = f(v, m, n, 0, n-1,  1);
    ll m2 = f(v, m, n, 0, n-1, -1);
    ll r  = m1 > m2 ? m1 : m2;
    cout << "\t"<< r << endl;
    return 0;
}

/*
4
4 5 1 3
*/