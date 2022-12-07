#include <bits/stdc++.h>
using namespace std;



int main() {
  string str; cin >> str;
  string sBan; cin >> sBan;
  map<char, int> mBan;
  int nBan; cin >> nBan;

  int ix = 97;
  for (auto &x: sBan) {
    char chr = ix; ix++;
    mBan[chr] = (49-char(x));
  }
  int n = str.size();
  // vector<int> sum(n, 0);
  vector<int> indx;
  for (int i=0; i<n; i++){
    // sum[i] += i==0 ? mBan[str[i]]: mBan[str[i]] + sum[i-1];
    if (mBan[str[i]]) indx.push_back(i);
  } 
  // cout << str.substr(0,0) << endl;
  set<string> pool;
  if (indx.size()<=nBan) {
    for (int i = 0; i<n; i++) 
      for (int j = i+1; j<n; j++) 
        pool.insert(str.substr(i,j));
  } else {
    int iSize = indx.size()-nBan;
    for (int i=0, a = 0; i<iSize; i++){
      int j = indx[i+nBan];
      for (int k=a+1; k<indx[i+nBan]; k++) {
        pool.insert(str.substr(i,j));
      }
      a = j;
    }
  }
  cout << pool.size() << endl;
  return 0;
}