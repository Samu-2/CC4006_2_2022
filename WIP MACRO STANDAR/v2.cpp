/**
 *
 * @file v2.cpp
 * @author fx
 * @brief
 * @version 0.1
 * @date 2022-11-03
 *
 * @copyright Nope
 *
 */
#include <bits/stdc++.h>
using namespace std;

/* Typedef
 ████████╗██╗   ██╗██████╗ ███████╗██████╗ ███████╗███████╗███████╗
 ╚══██╔══╝╚██╗ ██╔╝██╔══██╗██╔════╝██╔══██╗██╔════╝██╔════╝██╔════╝
    ██║    ╚████╔╝ ██████╔╝█████╗  ██║  ██║█████╗  █████╗  ███████╗
    ██║     ╚██╔╝  ██╔═══╝ ██╔══╝  ██║  ██║██╔══╝  ██╔══╝  ╚════██║
    ██║      ██║   ██║     ███████╗██████╔╝███████╗██║     ███████║
    ╚═╝      ╚═╝   ╚═╝     ╚══════╝╚═════╝ ╚══════╝╚═╝     ╚══════╝ */
  // Basic types
    typedef long long ll;
    typedef double  ld;
    typedef string  ss;
  // Vector
    typedef vector<ll>  v_ll;
    typedef vector<ld>  v_ld;
    typedef vector<ss>  v_ss;
  // Multiset
    typedef multiset<ll> m_ll;
    typedef multiset<ld> m_ld;
    typedef multiset<ss> m_ss;
  // Set
    typedef set<ll> s_ll;
    typedef set<ld> s_ld;
    typedef set<ss> s_ss;
  // Pairs
    typedef pair<ll, ll> ll_ll;
    typedef pair<ld, ld> ld_ld;
    typedef pair<ss, ss> ss_ss;
    typedef pair<ll, ss> ll_ss;
    typedef pair<ld, ss> ld_ss;

/* Structs
 ███████╗████████╗██████╗ ██╗   ██╗ ██████╗████████╗███████╗
 ██╔════╝╚══██╔══╝██╔══██╗██║   ██║██╔════╝╚══██╔══╝██╔════╝
 ███████╗   ██║   ██████╔╝██║   ██║██║        ██║   ███████╗
 ╚════██║   ██║   ██╔══██╗██║   ██║██║        ██║   ╚════██║
 ███████║   ██║   ██║  ██║╚██████╔╝╚██████╗   ██║   ███████║
 ╚══════╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝  ╚═════╝   ╚═╝   ╚══════╝ */
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

    T merge(T a, T b){ // Reemplazar esta funcion para determinar como juntar dos nodos para obtener el valor de su padre, en este caso es suma
      return a + b;
      }

    void build(int n, int i, int j){
      if(i == j){
      tree[n] = 0;
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

/* Macros
 ███╗   ███╗ █████╗  ██████╗██████╗  ██████╗ ███████╗
 ████╗ ████║██╔══██╗██╔════╝██╔══██╗██╔═══██╗██╔════╝
 ██╔████╔██║███████║██║     ██████╔╝██║   ██║███████╗
 ██║╚██╔╝██║██╔══██║██║     ██╔══██╗██║   ██║╚════██║
 ██║ ╚═╝ ██║██║  ██║╚██████╗██║  ██║╚██████╔╝███████║
 ╚═╝   ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝ ╚═════╝ ╚══════╝ */
#define _DBG true // ! DEBUG MODE
  // ? Debug dependant
    #if _DBG
      // * The start of the problem: This pretty much only ties the output
      #define _start() \
        ios::sync_with_stdio(0); cin.tie(0)
      // * DBG prints a variable
      #define _dbg(VAR) { \
          try() { \
            \
          } catch (...) { \
            \
          } \
        }
    #else
      #define _start()
      #define _dbg()
    #endif
  // ? Non debug dependant
    #define _a()

// * Begin
int main() {
  typedef pair<ll, ll> at;
  at p (1, 2);
  cout << p.first << endl;
  return 0;
}