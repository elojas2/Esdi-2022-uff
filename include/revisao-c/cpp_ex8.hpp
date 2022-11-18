#pragma once // evita múltiplas definições
#include <sstream>
#include <tuple>
#include <iostream>
using namespace std;

// dica: retorna uma tupla com 2 elementos (veja slides com std::make_tuple)
auto exercicio8(const char *entrada) { 
    
    std::istringstream nums{entrada};
    int *a, *b;
    int temp;
    nums >> *a; //2
    nums >> *b; //1
    
    std::tuple <int, int> tupla;
    tupla = make_tuple(*a, *b);
    
    cout << get<0>(tupla) << " " << get<1>(tupla) << endl; 

     temp = *a;
     *a = *b;
     *b = temp;

    get<0>(tupla) = *a; //1
    get<1>(tupla) = *b; //2

    cout << get<0>(tupla) << " " << get<1>(tupla) << endl; 
    //estou com dificuldade de retornar a tupla
    return 0;
}