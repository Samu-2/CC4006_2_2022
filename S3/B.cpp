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

int main () {
    _inpi(t);
    for (int x = 0; t > x; x++){
        _inpi(n);
        v_ll A;
        v_ll I;
        for (int y = 0; n > y; y++){
            _inpll(a_n);
            A.push_back(a_n);
            if (a_n < y+1){
                I.push_back(y);
            }
        }
        ll p = 0;
        for (int j = I.size()-1; j>0; --j) {
            ll l, r, m, t;
            l = 0; r = j-1; m = (l+r)/2; t = -1;
            while (l <= r) {
                if (I[m]+1 < A[I[j]]) {
                    t = m;
                    l = m+1;
                } else r = m-1;
                m = (l+r)/2;
            }
            p = (t != -1) ? p+t+1: p;
        }
        cout << p << endl;
    } 
    return 0;
}
/*
5
8
1 1 2 3 8 2 1 4
2
1 2
10
0 2 1 6 3 4 1 2 8 3
2
1 1000000000
3
0 1000000000 2
*/