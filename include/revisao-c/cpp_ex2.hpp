#pragma once // evita múltiplas definições

#include <stdio.h>

#include <iostream>
#include <sstream> // istringstream
using namespace std;
// exemplo útil (em C):
// ler N numeros e retornar a soma desses números
/*int exemplo_c(const char *entrada) {
  int n, count;

  sscanf(entrada, "%d%n", &n, &count);
  entrada += count;

  int s = 0;
  while (n--) {
    int v = 0;

    sscanf(entrada, "%d%n", &v, &count);
    entrada += count;

    s += v;
  }
  return s;
}

// exemplo útil (em C++):
// ler N numeros e retornar a soma desses números
int exemplo_cpp(const char *entrada)
  int n;
  // requer #include<sstream>
  std::istringstream meu_cin{entrada};
  meu_cin >> n;

  int s = 0;
  while (n--) {
    int v = 0;
    meu_cin >> v;
    s += v;
  }
  return s;
}*/

// ============
// falta fazer:

int exercicio2(const char *entrada) { 
  int n;

  std::istringstream meu_cin{entrada};
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
