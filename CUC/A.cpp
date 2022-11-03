#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> memo;

string Sn(int n){
    if (memo[n] == "") {
        string sol = Sn(n-1);
        memo[n] = sol + to_string(n+1) + " " + sol;
    }
    return memo[n];
}

int main(){
    int n; cin >> n; n--;
    memo.resize(n+1, "");
    memo[0] = "1 ";
    cout << Sn(n) << endl; 
    return 0;
}