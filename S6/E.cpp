#include <bits/stdc++.h>
using namespace std;

enum dir {LEFT, RIGHT, MID};

string comp(string &str, int l, int r, int *li, int *ri, string *ls, string *rs, dir d) {
    if (l>r) return "";
    if (r-l > 1 && r>=l) {
        int     *lli, *lri, *rli, *rri;
        string  *lls, *lrs, *rls, *rrs;
        string lstr = comp(str, l, (l+r)/2,   lli, lri, lls, lrs,  LEFT);
        string rstr = comp(str, (l+r)/2+1, r, rli, rri, rls, rrs, RIGHT);
        string ret  = lstr;
        if (d != MID) {
            if (d == LEFT) {
                if (*lrs == *rls) {
                    string ms = *lrs;
                    int mi = *lri + *rli;
                    mi = () ? : ;
                    mi = () ? : ;
                } else {
                    ret += to_string(*lri);
                    ret += *lrs;
                    ret += to_string(*rli);
                    ret += *rls;
                    ret += rstr;
                    rs   = rrs;
                    ri   = rri;
                    ls   = lls;
                    li   = lli;
                    return ret;
                }
            } else {
                if (*lrs == *rls) {

                } else {
                    ret += to_string(*lri);
                    ret += *lrs;
                    ret += to_string(*rli);
                    ret += *rls;
                    ret += rstr;
                    rs   = rrs;
                    ri   = rri;
                    ls   = lls;
                    li   = lli;
                    return ret;
                }
            } 
        }
    } else if (r == l) {
        *rs = d == RIGHT ? "" : str.substr(l, l+1); // building right
        *ls = d == LEFT  ? "" : str.substr(l, l+1); // building left
        *ri = d == RIGHT ? 0: 1; // 
        *li = d == LEFT  ? 0: 1; // 
        return "";
    } else {
        if (str[l] == str[r]) {
            *rs = d == RIGHT ? "" : str.substr(l, r+1); // building right
            *ls = d == LEFT  ? "" : str.substr(l, r+1); // building left
            *ri = d == RIGHT ? 0: 2; //
            *li = d == LEFT  ? 0: 2; //
        } else {
            *rs = d == RIGHT ? "" : str.substr(l, l+1); // building right
            *ls = d == LEFT  ? "" : str.substr(r, r+1); // building left
            *ri = d == RIGHT ? 0: 1; // 
            *li = d == LEFT  ? 0: 1; // 
        }
        return "";
    }
    return "";
}

int main() {
    string s; cin >> s;
    int *ln;
    string *ls;
    cout << s.size() << endl;
    comp(s, 0, s.size()-1, ln, ls, MID);
    cout << *ln << endl;
    return 0;
}