/* #=#=#=#=#=#  INCLUDE  #=#=#=#=#=# */
#include <bits/stdc++.h>
using namespace std;

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

/* #=#=#=#=#=#   BEGIN   #=#=#=#=#=# */

ll g(ll i, ll n, v_ll &v, v_ll &m) {
    if (i>=n) return 0;
    if (m[i] > 0) return m[i];
    else
        m[i] += max(g(i+2,  n, v, m), g(i+3, n, v, m)) + v[i];
    return m[i];
}

ll f(v_ll &v) {
    ll n = v.size();
    v_ll m(n, 0);
    ll m1 = g(0, n, v, m);
    ll m2 = g(1, n, v, m);
    ll max = m1 > m2 ? m1 : m2;
    return max;
}

int main() {
    int n, m;
    while (cin >> n >> m, n != 0) {
        v_ll filas(n);
        for (auto &x: filas) {
            v_ll fila(m); for(auto &x: fila) cin >> x;
            x = f(fila);
        }
        cout << f(filas) << endl;
    }
    return 0;
}

/*
2 4
9 10 2 7
5 1 1 5
0 0
*/