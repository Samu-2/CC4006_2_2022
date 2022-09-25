/* #=#=#=#=#=# INCLUDE #=#=#=#=#=# */
#include <bits/stdc++.h>
using namespace std;

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

typedef pair<int,int> i_i;

ll bb(v_ll &v, ll b, ll l){
    ll i, m, f;
    i = 0; f = l-1; m = (i+f)/2;
    ll last = -1;
    while (i != f && i <= f) {
        if (v[m] == b) {
            last = m;
            f = m-1;
        }
        else if (v[m] > b) f = m-1;
        else i = m+1;
        m = (i+f)/2;
    }
    last = (v[i] == b) ? i : last;
    return last;
}

int main() {
    ll n; cin >> n; 
	ll q; cin >> q;
	vector<ll> arr(n); for (ll &x: arr) cin >> x;
	for (; q > 0; q--){
		ll b; cin >> b;
		cout << bb(arr, b, n) << "\n";
	}
    return 0;
}