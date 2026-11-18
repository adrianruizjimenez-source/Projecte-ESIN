#ifndef _PENJAT_HUM_HPP
#define _PENJAT_HUM_HPP
#include <string>
#include <esin/error>
#include <esin/util>
#include "diccionari.hpp"

using namespace std;
using util::nat;

class penjat_hum {
public:
  penjat_hum(const diccionari& D);

  penjat_hum(const penjat_hum& a);
  penjat_hum& operator=(const penjat_hum& a);
  ~penjat_hum() noexcept;

  void nova_paraula(nat num_err);

  string registra_ronda(char c);

  nat nr_rondes() const noexcept;

  nat nr_errors() const noexcept;

  string errors() const noexcept;

  string reconstruccio_parcial() const noexcept;
  
  bool final() const noexcept;

  static constexpr int DICC_BUIT = 41;
  static constexpr int ERRORS_INCORRECTE = 42;
  static constexpr int CARACTER_INVALID = 43;
  static constexpr int RONDA_REPETEIX_LLETRA = 44;
  static constexpr int PARTIDA_ACABADA = 45;

private:
    #include "penjat_hum.rep"
};
#endif
