#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b; cin >> a >> b; b++;
    if (!(a%b)) {
        int p = a/b;
        for (int i = 0; i<b; i++) {
            for (int j = 1; j<p+1; j++)
                cout << b*j-i << ' ';
        }
    } else {
        vector<int> v(a); int i = 1; for(int &x: v) {x = i; i++;}
        auto it = v.begin();
        int pos = 0;
        while(v.size()%b) {
            if (pos+b >= v.size()) {
                pos = pos+b-v.size();
                it = v.begin();
                it += pos;
            }else {
                pos += b;
                it += b;
            }
            cout << *it << ' ';
            v.erase(it);
        }
    }
    cout << endl;
    return 0;
}