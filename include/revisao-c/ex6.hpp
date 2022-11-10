#pragma once // evita múltiplas definições
#include <sstream>

//dado um número k, calcule o k-ésimo termo da Sequência de Fibonacci (SF). 
//Leia o numero do exercício (5), depois um número k. Imprima o k-ésimo elemento da SF. 
//Na SF, um elemento X é a soma dos DOIS elementos anteriores da sequência: X-1 + X-2. 
//Obs: a SF começa por dois elementos de valor 1, ou seja, SF = 1 

int exercicio6(const char *entrada) { 

    std::istringstream num{entrada};

    int fibo;
    num >> fibo;
    
    int soma = 0;

    if(fibo == 1)
        return 0;
    else if(fibo == 2)
        return 1;
    else{
        int contador = 1;
        int a = 0;
        int b = 1;
        
        while(contador < fibo){
            soma = a + b;
            a = b;
            b = soma;
            contador++; 
        }

    }
    
    return soma;
}
