#ifndef _DICCIONARI_HPP
#define _DICCIONARI_HPP
#include <fstream>
#include <list>
#include <string>
#include <vector>
#include <esin/error>
#include <esin/util>

using namespace std;
using util::nat;

class diccionari {

public: 
  diccionari(); 
  
  diccionari(istream& is);
  
  diccionari(const diccionari& D);        
  diccionari& operator=(const diccionari& D) ; 
  ~diccionari() noexcept;

  void insereix(const string& p);
  
  string prefix(const string& p) const;
  
  void satisfan_patro(const vector<string>& q, 
                      list<string>& L) const;
                      
  void llista_paraules(nat k, list<string>& L) const;
  
  nat num_pal() const noexcept;

  string operator[](nat i) const;

  static constexpr int INDEX_INCORRECTE = 21;

private:
  #include "diccionari.rep"
};
#endif
