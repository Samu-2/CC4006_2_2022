#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

template <class T>
struct SegmentTree{
  int N, P;
  vector <T> tree;
  SegmentTree(int _N){
    N = _N;
    tree.resize(4*N);
    build(0, 0, N-1);
  }

  SegmentTree(int _P, vector<T> &init) {
    P = _P;
    N = init.size();
    tree.resize(4*N);
    build(0, 0, N-1, init);
  }

  T merge(int n, T a, T b){ // Reemplazar esta funcion para determinar como juntar dos nodos para obtener el valor de su padre, en este caso es suma
    int t = log2(n+1); 
    if ((t%2 + P%2)%2)
      return a | b;
    else
      return a ^ b;
  }
  
  void build(int n, int i, int j){
    if(i == j){
      tree[n] = 0;
      return;
    }
    int mid = (i+j)/2;
    build(2*n+1, i, mid);
    build(2*n+2, mid+1, j);
    tree[n] = merge(n, tree[2*n+1], tree[2*n+2]);
  }

  void build(int n, int i, int j, vector<T> &init){
    if(i == j){
      tree[n] = init[i];
      return;
    }
    int mid = (i+j)/2;
    build(2*n+1, i, mid, init);
    build(2*n+2, mid+1, j, init);
    tree[n] = merge(n, tree[2*n+1], tree[2*n+2]);
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
    return merge(n,
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
    tree[n] = merge(n, tree[2*n+1], tree[2*n+2]);
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


int main(){
    ll n, m; cin >> n >> m;
    int n_2 = pow(2, n);
    vector <ll> a(n_2); for (auto &k: a) cin >> k;
    SegmentTree<ll> st(n, a);
    for (ll j = 0; j<m; j++){
        ll i, x; cin >> i >> x;
        st.update(i-1, x);
        cout << st.tree[0] << endl;
    }
}
/*

2 4
2 6 3 5
1 4
3 4
1 2
1 2

2 4
4 6 3 5
1 4
3 4
1 2
1 2


3 4
1 2 3 4 5 6 7 8
1 2
2 2
3 2
5 2

-       1
+    0       1
-  0   0   0   1
+ 0 0 0 0 0 0 0 1


+        0
-    1       1
+  1   0   0   1
  1 0 0 0 0 0 0 1



+        0
-    1       1
+  1   0   0   1

3 2
0 0 0 0 0 0 0 1
0 1
1 1

4 2 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
0 1
1 1

// if n%2 entonces if l%2 + 0 = |
l -
0 ^
1 |
2 ^
3 |
4
n = 4

// if not n%2 entonces if l%2 + 1 = | 
l -
0 |
1 ^
2 |
3
n = 3

// => if (l%2 + n%2) = |


*/