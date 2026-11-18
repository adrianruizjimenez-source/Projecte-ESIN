#include "word_toolkit.hpp"
using namespace std;

bool word_toolkit::es_canonic(const string& s) noexcept {
    bool ascendent = true;
    char c;
    if (s.size() > 0) c = s[0];
    for (int i = 1; i < s.size() and ascendent; ++i) {
        if (s[i] < c) ascendent = false;
        else c = s[i];
    }
    return ascendent;
}

char word_toolkit::mes_frequent(const string& excl, const list<string>& L) noexcept {
    
}