#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string str, minstr; cin >> str;
    minstr = str;
    while (minstr.size() < k) minstr += minstr;
    minstr = minstr.substr(0, k);
    for(int i = str.size()-1; 0 < i; i--) {
        string s = str.substr(0, i);
        while(s.size() < k) s += s;
        s = s.substr(0, k);
        minstr = min(minstr, s);
    }
    cout << minstr << endl;
    return 0; 
}