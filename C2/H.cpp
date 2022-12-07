#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
	vector<int> pi(n);
    vector<bool> pint(n);
	for (int i = 1; i < n; i ++){
		int k = pi[i - 1];
		while (k > 0 and s[i] != s[k]) 
            k = pi[k - 1];
		if (s[i] == s[k])
            k ++;
        if (s[0] == s[i])
            pint[i] = true;
		pi[i] = k;
	}
    int k = pi[n-1];
    int l = 1;
    for (int i = n-1; i>=n-k; i--){
        if (pint[i]){
            cout << (l) << " ";
        }
        l++;
    }
    return 0;
} 