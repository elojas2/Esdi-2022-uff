#pragma once // evita múltiplas definições

#include <stdio.h>

#include <iostream>
#include <sstream> // istringstream

// exemplo útil (em C):
// ler N numeros e retornar a soma desses números
int exemplo_c(const char *entrada) {
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
int exemplo_cpp(const char *entrada) {
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
}

// ============
// falta fazer:

int exercicio2(const char *entrada) { return 0; }
