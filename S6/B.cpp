#include <bits/stdc++.h>
using namespace std;

template<class T>
std::vector<int> prefixFunction(T &s){
	int n = s.size();
	std::vector<int> pi(n);
	for (int i = 1; i < n; i ++){
		int k = pi[i - 1];
		while(k > 0 and s[i] != s[k]) k = pi[k - 1];
		if (s[i] == s[k]) k ++;
		pi[i] = k;
	}
	return pi;
}

int main() {
    string s; cin >> s;
    vector<int> prefix = prefixFunction(s);
    int l = prefix.back();
    if (l == 0) {
        cout << "Just a legend" << endl;
        return 0;
    }
    for (int i=0; i<prefix.size()-1; i++) {
        if (prefix[i] == l) {
            cout << s.substr(0, l) << endl;
            return 0;
        }
    }
    if (prefix[l-1] == 0) {
        cout << "Just a legend" << endl;
        return 0;
    }
    cout << s.substr(0, prefix[l-1]) << endl;
}