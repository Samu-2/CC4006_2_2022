/* #=#=#=#=#=# INCLUDE #=#=#=#=#=# */
#include <bits/stdc++.h>
using namespace std;

/* #=#=#=#=#=#  MACROS   #=#=#=#=#=# */
#define endp "\n"
#define sep  cerr << "================================" << endl;
#define DBG  (x) cerr << #x << " := " << (x) << endl;
#define DBGV (v) cerr << 

#define INFORN(vin) ININT(vin); FORN(indx_##vin, vin)
#define FORN  (indx, limit)  for(int indx = 0; indx < limit; indx++)
#define FORI  (first, last, elmnt) for(auto elmnt = *first; first != last; first++, elmnt = *first)
#define FORV  (v, elmnt)    for(auto elmnt: v) 
#define FORS  (s, elmnt)    FORI(ITALL(s), elmnt)

#define INPUT(var, type) type var; cin >> var
#define ININT(var) INPUT(var, int)
#define INLL (var) INPUT(var, ll)
#define INVEC(var, varName, length) vector<var> varName(length); for (auto &INPUT_VEC_##varName: varName) cin >> INPUT_VEC_##varName
#define INSET(var, varName, length) set<var>    varName; var INPUT_SET_##varName; FORN(INPUT_SET_INDX_##varName, length) \
									{ cin >> INPUT_SET_##varName; varName.insert(INPUT_SET_##varName); }
#define INMST(var, varName, length) multiset<var> 

#define ITALL (e) e.begin(),  e.end();
#define ITALLR(e) e.rbegin(), e.end();

// Debug
#define dbg(x) cerr << #x << " := " << (x) << endl
#define forn(limit, index) for(int index = 0; index < limit; index++)
#define cint(x) int x; cin >> x
#define cinll(x) ll x; cin >> x
#define sz(v) v.size()
#define cinfor(x, index) cint(x); forn(x, index)

/* #=#=#=#=#=#  TYPEDEF  #=#=#=#=#=# */
typedef long long ll;
typedef double    ld;
// multiset
typedef multiset<int> m_i;
typedef multiset<ll>  m_ll;
typedef multiset<ld>  m_ld;
// vector
typedef vector<char> v_c;
typedef vector<int>	 v_i;
typedef vector<ll> 	 v_ll;
typedef vector<ld>   v_ld;
// set
typedef set<int> s_i;
typedef set<ll>  s_ll;
typedef set<ld>  s_ld;

typedef pair<int,int> ii;

/* #=#=#=#=#=#    MAIN   #=#=#=#=#=# */
int main() {
	for (int i=0; 10>i; i++) {
		v_i v(10);
	}
}