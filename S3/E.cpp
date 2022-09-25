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

int f(V_i ) {

}

int bb(v_i &c, int n, int u) {
    int l, m, r;
    l = 0; r = n-1; m = (l+r)/2;
    while (l != r && l <= r) {
        if (f()) {
            l = m+1;
        } else {
            r = m-1;
        }
    }
    return m;
}

int main(){
    int n, u;
    while(cin >> n >> u, n != -1){
        v_i c(n); for(int &x: c) cin >> x;
        bb(c, u, n);
    }
    return 0;
}