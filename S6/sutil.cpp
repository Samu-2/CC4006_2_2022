#include <bits/stdc++.h>
using namespace std;

struct AdvancedString{
  long long stringLen;
  string baseString;
  vector<long long> hash;
  vector<long long> pwHash{1};
  long long m = 844527036714826391;
  int z = 2;

  AdvancedString(string _baseString) {
    baseString  = _baseString;
    stringLen   = _baseString.size();
    hashString(hash, _baseString);
  }

  void hashString(vector<long long> &hashv, string strToHash) {
    for (long long i = 0; i<strToHash.size(); i++){
      long long iHash = 0;
      for (long long k = i; k<strToHash.size(); k++){
        iHash += (int) (strToHash[k]) * powerHash(i);
      }
      iHash %= m;
      hashv.push_back(iHash);
    }
    hashv.push_back(0);
  }

  long long powerHash(int x) {
    if (pwHash.size()-1 == x) {
      pwHash.push_back(pwHash[x-1]);
      return pwHash[x];
    } else {
      return powerHash(x-1);
    }
  }

  long long subStringHash(long long left, long long right) {
    long long pw = 1; for (int i=0; i<right-left; i++) pw *= z;
    return hash[left] - hash[right]*pw;
  }

  void findSubstring(vector<long long> &pos, string subs) {
    long long hashSub = 0;
    for (long long i = 0; i<subs.size(); i++){
      hashSub += subs[i]*powerHash(i);
    }
    hashSub %= m;
    for (long long i = subs.size(); i<=stringLen; i++){
      if(subStringHash(i-subs.size(), i) == hashSub) 
        pos.push_back(i-subs.size());
    }
  }

};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  for (int i=0; i<3; i++){
    int lp; string p, s;
    cin >> lp >> p >> s;
    vector<long long> pos;
    AdvancedString as(s);
    as.findSubstring(pos, p);
    if (pos.size() != 0)
      for (auto &x: pos) cout << x << "\n";
    else 
      cout << "\n"; 
  }
}