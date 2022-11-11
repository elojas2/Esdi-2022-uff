#pragma once // evita múltiplas definições
#include <sstream>
#include <bits/stdc++.h>

//Leia um conjunto de N números inteiros e retorne sua mediana
//5
//8 3 6 1 4
//6
//8 3 6 1 4 7
// dica: retorno de 'float', não 'int'
float exercicio9(const char *entrada) { 
    
    std::istringstream numeros{entrada};

    int contador;
    numeros >> contador;
    float vetorNum[contador];

    for(int i = 0; i < contador; i++)
        numeros >> vetorNum[i]; 
    
    sort(vetorNum, vetorNum + contador);

    /*for(int i = 0; i < contador; i++){
        cout << vetorNum[i] << endl;
    }*/


    if(contador % 2 == 0){
        int soma = (contador/2)-1;
        return (vetorNum[soma] + vetorNum[soma+1])/2;
    }else{
        return round(vetorNum[(contador/2)]);
    }

}
