/* #=#=#=#=#=#  INCLUDE  #=#=#=#=#=# */
#include <bits/stdc++.h>
using namespace std;

/* #=#=#=#=#=# MACRO DBG #=#=#=#=#=# */
#define DEBUG true
#define _tie() ios::sync_with_stdio(0); cin.tie(0)
#if DEBUG
#define _dbgMain() cout << __TIME__ << " @ " << __FILE__ << endl << endl; _tie()
#define _dbg(x)    cerr << " > " << #x << " := " << (x) << endl;
#else
#define _dbgMain() _tie()
#define _dbg(x) 1
#endif

/* #=#=#=#=#=#   MACRO   #=#=#=#=#=# */
#define endp '\n'
#define _inp(type, var) type var; cin >> var
#define _inpi(var) _inp(int, var)
#define _inpll(var) _inp(ll, var)
#define _inpld(var) _inp(ld, var)

/* #=#=#=#=#=#  TYPEDEF  #=#=#=#=#=# */
typedef long long   ll;
typedef long double ld;
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


ld mejora(ld n, ld m, ll p){
    ld a =  m + p*(p+1)*0.5;
    // cout << p << " " << n-a << endl;
    if ( n - m + p*(p+1)*0.5 <= 0) return mejora(n, m, p-1); 
    return p;
}

int main(){
    _inpld(n); _inpld(m);
    ll r = n;
    if ( m < n ) {
        ld d = ceil(sqrtl(2*(n-m)+0.25)-0.5);
        d = mejora(n, m, d);
        // if (n-(m + (d*(d+1))*0.5) <= 0 ) cout << " OK !" << endl;
        // else cout << " ERR: " << n-(m + (d*(d+1))*0.5) << endl;
        r = m+d;
    }
    cout << r << endl;
    return 0;
}