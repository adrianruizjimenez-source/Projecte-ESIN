#ifndef _WORD_TOOLKIT_HPP
#define _WORD_TOOLKIT_HPP
#include <string>
#include <list>
#include <esin/error>

using namespace std;

namespace word_toolkit {
  bool es_canonic(const string& s) noexcept;
  
  char mes_frequent(const string& excl, const list<string>& L) noexcept;
};
#endif
