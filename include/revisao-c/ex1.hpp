#pragma once // evita múltiplas definições

#include <stdio.h>

// resolução exercício 1 (verifique se está correto)
int exercicio1(const char *entrada) {
  int a, b;
  sscanf(entrada, "%d %d", &a, &b);
  int s = 0;
  for (int i = a; i <= b; i++)
    s += i;
  return s;
}
