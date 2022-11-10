#pragma once // evita múltiplas definições
#include <stdio.h>
#include <sstream> 
#include <iostream>
using namespace std; 
int exercicio4(const char *entrada) { 
    
  //CHECK
  //printf("exercicio 2 tem resultado: %d\n", exercicio2(entrada));
  
  //forme a situação (Aprovado/Reprovado) no k-ésimo aluno da turma. Leia o numero do exercício, 
  //depois o número de alunos N (para 1 < N < 100). Leia as informações dos N alunos, primeiro sua nota
  //(de 0.0 a 10.0), depois seu nome. Leia o número k e imprima o nome e situação do k-ésimo aluno (1 < k < N), 
  //se sua nota for maisor ou igual a 6, ele está aprovado (valor 1), caso contrário, está 
  
    int qtd_aluno;
    float notas[100];
    char nome[20];
    
    std::istringstream teste{entrada};
    teste >> qtd_aluno;
  
    if(qtd_aluno < 0 || qtd_aluno > 100)
        return 0;

    int contador = 1;
    while(qtd_aluno--){
      teste >> notas[contador];
      teste >> nome;
      contador++;
    }

    int posicao = 0;
    teste >> posicao;

    if(notas[posicao] < 6)
      return 0; 
    else
      return 1;  

}
