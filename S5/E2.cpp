#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> range;

template <class T>
struct SegmentTree{
  int N;
  vector <T> tree;
  SegmentTree(int _N){
    N = _N;
    tree.resize(4*N);
    build(0, 0, N-1);
  }

  SegmentTree(vector<T> &init) {
    N = init.size();
    tree.resize(4*N);
    build(0, 0, N-1, init);
  }

  T merge(T l, T r){ // Reemplazar esta funcion para determinar como juntar dos nodos para obtener el valor de su padre, en este caso es suma
    range res;
    vector<ll> srt;
    ll lM = max(l.first, l.second);
    ll lm = min(l.first, l.second);
    ll rM = max(r.first, r.second);
    ll rm = min(r.first, r.second);
    if (rM < lm || rm > lM) {
      if (rM < lm) {
        res.first  = l.first;
        res.second = l.second; 
      } else {
        res.first  = r.first;
        res.second = r.second; 
      }
    }
    else {
      res.first  = lM;
      res.second = rM;
    }
    return res;
  }
  
  void build(int n, int i, int j){
    if(i == j){
      tree[n] = range(0, 0);
      return;
    }
    int mid = (i+j)/2;
    build(2*n+1, i, mid);
    build(2*n+2, mid+1, j);
    tree[n] = merge(tree[2*n+1], tree[2*n+2]);
  }

  void build(int n, int i, int j, vector<T> &init){
    if(i == j){
      tree[n] = init[i];
      return;
    }
    int mid = (i+j)/2;
    build(2*n+1, i, mid, init);
    build(2*n+2, mid+1, j, init);
    tree[n] = merge(tree[2*n+1], tree[2*n+2]);
  }

  T query(int l, int r){
    return query(0, 0, N-1, l, r);
  }

  T query(int n, int i, int j, int l, int r){
    if(l <= i && j <= r) return tree[n];
    int mid = (i+j)/2;
    if(mid < l || r < i)
      return query(2*n+2, mid+1, j, l, r);
    if(j < l || r < mid+1)
      return query(2*n+1, i, mid, l, r);
    return merge(
        query(2*n+1, i, mid, l, r),
        query(2*n+2, mid+1, j, l, r));
  }

  void update(int t, T val){
    update(0, 0, N-1, t, val);
  }
  
  void update(int n, int i, int j, int t, T val){
    if(t < i || j < t) return;
    if(i == j){
      tree[n] = val;
      return;
    }
    int mid = (i+j)/2;
    update(2*n+1, i, mid, t, val);
    update(2*n+2, mid+1, j, t, val);
    tree[n] = merge(tree[2*n+1], tree[2*n+2]);
  }

  int search(int from, T val){
    if(!from) return search(0, 0, N-1, val);
    return search(0, 0, N-1, val+query(0, from-1));
  }

  int search(int n, int i, int j, T val){
    if(tree[n] < val) return -1;
    if(i==j && tree[n] >= val) return i;
    int mid = (i+j)/2;
    if(tree[2*n+1] >= val) return search(2*n+1, i, mid, val);
    else return search(2*n+2, mid+1, j, val-tree[2*n+1]);
  }
};

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int N; cin >> N;
  range def(0, 0);
  vector<range> a(N, def); for(auto &x: a) cin >> x.first;
  SegmentTree<range> st(a);
  int transactions; cin >> transactions;
  for (int i = 0; i<transactions; i++) {
    char q; int x, y; cin >> q >> x >> y;
    if (q == 'Q') {
      x--; y--;
      range res = st.query(x, y);
      ll ret = (res.first + res.second);
      cout << ret << endl;
    } else {
      range upd(y, -1);
      st.update(x, upd);
    }
  }
  return 0;
}

/* 

5
1 2 3 4 5
6
Q 2 4
Q 2 5
U 1 6
Q 1 5
U 1 7
Q 1 5


 */