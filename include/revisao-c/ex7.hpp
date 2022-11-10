#pragma once // evita múltiplas definições
#include <stdio.h>
#include <string.h>
#include <sstream>

using namespace std;
// dica: retorno de 'char', não 'int'
//número N e simule N rodadas de Jokenpô entre 2 participantes, João e Maria. 
//Pedra será simbolizado por 'd', papel por 'p', e tesoura por 't'.
//Retorne o jogador que mais venceu (M/J) ou X, caso haja empate. Maria joga 
// D < T == D WINS
//

char exercicio7(const char *entrada) { 
    
    int num;
    char jogador1[4], jogador2[4];
    int empate = 0;
    int maria = 0;
    int joao = 0;

    std::istringstream dados{entrada};
    dados >> num;
    
    for(int i = 0; i < num; i++){

        dados >> jogador1;
        dados >> jogador2;

        if(strcmp(jogador1, jogador2 ) == 1){
            empate++;
        }else if(strcmp(jogador1, "t") && strcmp(jogador2, "p") ||
            strcmp(jogador1, "p") && strcmp(jogador2, "d") ||
            strcmp(jogador1, "d") && strcmp(jogador2, "t")){
                maria++;
        }
        else if(strcmp(jogador2, "t") && strcmp(jogador1, "p") ||
            strcmp(jogador2, "p") && strcmp(jogador1, "d") ||
            strcmp(jogador2, "d") && strcmp(jogador1, "t")){
                joao++;
        }
    }

        if(joao > maria)
            return 'J';
        else if(maria > joao)
            return 'M';
        else
            return 'X';
}
