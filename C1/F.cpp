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

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        v_i r(n); for(int j = 0; j < n; j++) {
            int x; cin >> x;
            r[j] = x - j;
        }
        
    }
}

/*
4
6
3 5 1 4 6 6
3
1 2 3
4
1 3 3 4
6
1 6 3 4 5 6

*/