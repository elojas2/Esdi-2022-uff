#pragma once // evita múltiplas definições

#include <stdio.h>

#include <iostream>
#include <sstream> // istringstream
using namespace std;

int exercicio2(const char *entrada) { 
  
  std::istringstream meu_cin{entrada};
  int n;
  meu_cin >> n;

  int candidato1 = 0 , candidato2 = 0, candidato3=0;
  int leitura;
  while(n--){
    meu_cin >> leitura;
    if(leitura == 1)
      candidato1+=1;
    else if(leitura == 2)
      candidato2+=1;
    else if(leitura == 3)
      candidato3+=1;  
  }

  if(candidato1 > candidato2 && candidato1 > candidato3){
    return 1;
  }else if(candidato2 > candidato1 && candidato2 > candidato3){
    return 2;
  } if(candidato3 > candidato2 && candidato3 > candidato1){
    return 3;
  }else{
    return 0;
  }

}
