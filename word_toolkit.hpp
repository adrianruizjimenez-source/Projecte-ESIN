#ifndef _WORD_TOOLKIT_HPP
#define _WORD_TOOLKIT_HPP
#include <string>
#include <list>
#include <esin/error>

using namespace std;

namespace word_toolkit {
  bool es_canonic(const string& s) noexcept;
  

  char mes_frequent(const string& excl, const list<string>& L) noexcept {

    int freq[26] = {0};

    for (list<string>::const_iterator it = L.begin(); it != L.end(); ++it) {
      for (int i = 0; i < int((*it).size()); ++i) {
        ++freq[(*it)[i] - 'A'];
      }
    }

    for (int i = 0; i < int(excl.size()); ++i) {
      freq[excl[i] - 'A'] = -1;
    }
    int max = -1;
    int index = -1;
    for (int i = 0; i < 26; ++i) {
      if (freq[i] > max) {
        max = freq[i];
        index = i;
      }
    }

    char  c;
    if (max == -1) {c = '\0';}
    else {c = 'A' + index;}

    return c;
    
  }
};
#endif
