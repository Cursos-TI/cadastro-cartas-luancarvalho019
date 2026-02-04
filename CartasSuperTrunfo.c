#include <stdio.h>

int main(){
  char carta[50];
  char cidade[50];
  char estado[50];
  float população;
  float pontos;
  float area;
  float pib;
  
  
 printf("Qual o codigo da carta?: \n");
 scanf("%s", carta);

 printf("Qual o nome da cidade?: \n");
 scanf("%s", cidade);

 printf("Qual o estado?: \n");
 scanf("%s", estado);

 printf("Qual o tamanho da população?: \n");
 scanf("%.2f", &população);

 printf("Quantos pontos turisticos?: \n");
 scanf("%.2f", &pontos);


 printf("Codigo da carta: %s\n", carta);
 printf("Nome da cidade: %s\n", cidade);
 printf("Estado: %s\n", estado);
 printf("População: %.2f\n", população);
 printf("Pontos turisticos: %.2f\n", pontos);

 return 0;

/*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres
*/
}

