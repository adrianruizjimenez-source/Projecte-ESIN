#ifndef _PENJAT_MAQ_HPP
#define _PENJAT_MAQ_HPP
#include <string>
#include <list>
#include <vector>
#include <esin/error>
#include <esin/util>
#include "diccionari.hpp"

using namespace std;
using util::nat;


class penjat_maq {
public:
  penjat_maq(const diccionari& D);

  penjat_maq(const penjat_maq& a);
  penjat_maq& operator=(const penjat_maq& a);
  ~penjat_maq() noexcept;

  void nova_paraula(nat k);

  void registra_ronda(char c, const vector<nat>& on);

  void solucions_candidates(list<string>& candidates, 
                            char& seg_intent) const;

  nat nr_rondes() const noexcept;
  
  nat nr_errors() const noexcept;

  string errors() const noexcept;

  string reconstruccio_parcial() const noexcept;

  static constexpr int CARACTER_INVALID = 31;
  static constexpr int RONDA_REPETEIX_LLETRA = 32;
  static constexpr int POSICIO_INVALIDA = 33;

private:
  #include "penjat_maq.rep"
};
#endif
