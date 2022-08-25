/*
B - Sapo y Sepo - Interludio 1
Sapo tenía una permutación aa de nn enteros 11, 22, 33, \cdots⋯, nn. 
Una permutación es un arreglo de tamaño nn donde todos los enteros del 11 al nn aparecen exactamente una vez.

El problema es que Sapo perdió su permutación original, la que necesita para ingresar a su servidor secreto en 
el cual le esperan instrucciones dejadas por Sepo para su próximo atentado terrorista.

*/

#include <iostream>
#include <vector>

using namespace std;

// Debug
#define dbg(x) cerr << #x << " := " << (x) << endl
#define sep cerr << "================================" << endl 

// Control
#define forn(limit, index) for(int index = 0; index < limit; index++)

// Input
#define cint(x) int x; cin >> x
#define cinll(x) ll x; cin >> x
#define sz(v) v.size()

// Mixed
#define cinfor(x, index) cint(x); forn(x, index)

typedef long long ll;
typedef unsigned long long ull;

int main() {
    return 0;
}

void solve(){
    // First line the number of cases
    cinfor(t, indx){
        // The size of the array
        cint(n);
        vector<int> to_alloc;
        vector<int> output;
        forn(n, i){
            cint(x);
            if (x=0){
                to_alloc.push_back(i);
                output.push_back(-1);
            } else {
                output.push_back(x);
            }
        }   
    }
}