#pragma once // evita múltiplas definições
#include <tuple>
#include <sstream>
#include <iostream>
using namespace std;

// dica: retorna uma tupla com 4 elementos (veja slides com std::make_tuple)

// Calcule a soma, a média, o máximo e o mínimo entre N números reais
// Ao final, retorna uma tupla com a soma, média, máximo e mínimo destes números

auto exercicio3(const char *entrada) {
  
  std::istringstream numeros{entrada};
  float n;
  numeros >> n;
  float soma = 0;
  float media = 0;
  float max = 0;
  float min = __FLT_MAX__;
  
 
  std::tuple <float, float, float, float> tupla;
  
  tupla = make_tuple(0.0, 0.0, 0.0, 0.0);


  for(int i = 0; i < n; i++){
    float leitura;
    numeros >> leitura;  
    soma += leitura;

    if(leitura > max){
      max = leitura;
      get<2>(tupla) = max;
    }else if(leitura < min){
      min = leitura;
      get<3>(tupla) = min;
    }
  }

  get<0>(tupla) = soma;
  get<1>(tupla) = soma/n;

  //cout << get<0>(tupla) << " " << get<1>(tupla) << " " << get<2>(tupla) << " " << get<3>(tupla)<<endl;
  
  
  return get<0>(tupla), get<1>(tupla), get<2>(tupla), get<3>(tupla);
}
