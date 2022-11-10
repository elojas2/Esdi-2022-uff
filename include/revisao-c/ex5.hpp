#pragma once // evita múltiplas definições
#include <stdio.h>
#include <sstream>


int exercicio5(const char *entrada) { 
    
    //dado um inteiro N, calcule o fatorial de N. Leia o numero do exercício (4), 
    //depois um número inteiro N. Imprima o fatorial de N. Obs: o fatorial de N (escrito como "N!") 
    //é a multiplicação sucessiva de 1 até N. Exemplo: 4! = 1 * 2 * 3 * 4 = 24
    std::istringstream calculo{entrada};
    int num;
    int fatorial = 1;
    
    calculo >> num;
    
    while(num >= 1){
        fatorial*= num--;
    }
   
    return fatorial; 
}
