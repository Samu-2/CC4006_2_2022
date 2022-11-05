#include <bits/stdc++.h>
using namespace std;

#define _dbgitf(VAR, PRNT_FUN) {\
    typeof(VAR) _DBGITF_VAR_##VAR = (VAR);\
    cerr << __LINE__ << " > " << #VAR << " it obj := " << _DBGITF_VAR_##VAR.size() << "size " << endl;\
    auto _DBGITF_ITB_##VAR = _DBGITF_VAR_##VAR.begin(); \
    auto _DBGITF_ITE_##VAR = _DBGITF_VAR_##VAR.end(); \
    vector<string> _DBGITF_PRNT_BUFFER_##VAR(_DBGITF_VAR_##VAR.size());\
    unsigned long long  _DBGITF_FOR_I_##VAR = 0; \
    for(auto _DBGITF_FOR_IT_##VAR = _DBGITF_VAR_##VAR.begin(); \
    _DBGITF_FOR_IT_##VAR != _DBGITF_VAR_##VAR.end(); _DBGITF_FOR_IT_##VAR++, _DBGITF_FOR_I_##VAR++) {\
      _DBGITF_PRNT_BUFFER_##VAR[_DBGITF_FOR_I_##VAR] = PRNT_FUN(*_DBGITF_FOR_IT_##VAR); \
    }\
    for(auto &x: _DBGITF_PRNT_BUFFER_##VAR) cout << x << endl; \

  }

#define _dbgit(VAR) {\
  typeof(VAR) _DBGIT_VAR_##VAR = (VAR);\
  auto _DBGIT_IT_##VAR = _DBGIT_VAR_##VAR.begin();\
  _dbgitf(VAR, string [](typeof(*_DBGIT_IT_##VAR) _DBGIT_DEF_FUN_ELEMENT_##VAR) {\
    return to_string(_DBGIT_DEF_FUN_ELEMENT_##VAR);\
    })\
  }

int main() {
  vector<int> VAR{1, 7, 3, 4, 5};
  typeof(VAR) _DBGIT_VAR_VAR = (VAR);
  auto _DBGIT_IT_VAR = _DBGIT_VAR_VAR.begin();\
  _dbgitf(VAR, [](typeof(*_DBGIT_IT_VAR) _DBGIT_DEF_FUN_ELEMENT_VAR) {
    return to_string(_DBGIT_DEF_FUN_ELEMENT_VAR);
    });
  vector<string> test{"asdf", "oal", "paralelepipedo"};   
  cout << (*max_element(test.begin(), test.end())).size() << endl;
  return 0;
} 