// ---------------------------------------------------
// INCLUDE
#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------
// MACRO
#define _DBG true
// DBG DEPENDANT FUNCTIONS
#if _DBG
#define _tie()  1
#define _dbg(VAR) {                                                                                             \
    typeof(VAR) _##VAR_PRINT = (VAR);                                                                           \
    cerr << " > " << #VAR << " := " << _##VAR_PRINT << endl;                                                    \
    }       
#define _dbgv(VEC) {                                                                                            \
    cerr << " > " << #VEC << " vector := " << VEC.size() << endl;                                               \
    for(int _##VEC_DISPLAY_X = 0; _##VEC_DISPLAY_X < 10 && _##VEC_DISPLAY_X < VEC.size(); _##VEC_DISPLAY_X++)   \
        cerr << "\t" << _##VEC_DISPLAY_X;                                                                       \
    int _##VEC_DISPLAY_Y = 0;                                                                                   \
    for(auto &_##VEC_ELEMENT: VEC) {                                                                            \
        if(!(_##VEC_DISPLAY_Y % 10))                                                                            \
            cerr << endl << _##VEC_DISPLAY_Y/10 << "x";                                                         \
        cerr << "\t" << _##VEC_ELEMENT;                                                                         \
        _##VEC_DISPLAY_Y++;                                                                                     \
    }                                                                                                           \
    cerr << endl;                                                                                               \
}
#else   
#define _tie() ios::sync_with_stdio(0); cin.tie(0)
#define _dbg(x) 1
#define _dbgv(v) 1
#endif
// GENERAL MACROS
#define _inp(TYPE, VAR) \
    TYPE VAR; cin >> VAR
#define _inpll(VAR) \
    _inp(ll, VAR)
#define _inpv(TYPE, VEC, LEN) \
    TYPE VEC (LEN); for(auto &_##VEC_ELEMENT : VEC) cin >> x
#define _inpva(TYPE, VEC)                                                                                       \
    tyep VAR; ` for(auto &)                                          \


// ---------------------------------------------------
// TYPEDEFs
typedef long long ll; 
typedef double    ld;
typedef string    ss;
// vector 
typedef vector<ss>   v_ss;
typedef vector<ll> 	 v_ll;
typedef vector<ld>   v_ld;
#define v_p(pair, VAR) (vector<pair>)
// multiset
typedef multiset<ss>  ms_ss;
typedef multiset<ll>  ms_ll;
typedef multiset<ld>  ms_ld;
#define m_p(pair, VAR) (multiset<pair>) 
// set
typedef set<ss>       s_ss;
typedef set<ll>       s_ll;
typedef set<ld>       s_ld;
#define s_p(pair, VAR) (set<pair>)
// pair
typedef pair<int,int>   i_i;
typedef pair<ll, ll>  ll_ll;
typedef pair<ld, ld>  ld_ld;
#define p_p(type1, type2) (pair<type1, type2>)

#define cpy(VAR, des) typeof(VAR) des = VAR;

// ---------------------------------------------------
// main
int main() {
    int x = 1123;
    int k = (4 | 2);                                               
    _dbg(k);
    cout << "Test" << endl;
    _inp(ll, asd);
    _inpv(v_ll, asdv, asd);
    _dbgv(asdv);                                                        
    cerr << endl;
    return 0;
}