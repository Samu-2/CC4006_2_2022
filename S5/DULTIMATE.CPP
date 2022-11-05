#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct Nodo {
  ll value;
  struct Nodo* next;
  Nodo (int v, Nodo node) {
    value = v; 
    next  = &node;
  }
  Nodo (int v) {
    value = v;
  }
} Nodo;

struct ciclo {
    Nodo raiz;
    ciclo (int n) {
        raiz     = Nodo(1);
        Nodo ant = Nodo(n+1, raiz);
    }
};