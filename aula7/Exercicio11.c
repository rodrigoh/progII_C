/*
Leia uma sequência qualquer de 10 caracteres, armazene em um vetor, 
depois, leia outro caractere do teclado, e conte quantas vezes ele aparece 
no vetor
*/
#include<stdio.h>

int main(){
  char palavra[10];
  char busca;
  setbuf(stdin,NULL);
  for(int i=0;i<10;i++){
    printf("Digite uma letra para vetor[%d]: ",i);
    scanf("%c",&palavra[i]);
    setbuf(stdin,NULL);
  }
  printf("Digite um letra para pesquisar no vetor: ");
  scanf("%c",&busca);
  int cont=0;
  for(int i=0;i<10;i++){
    if(palavra[i]==busca){
      cont++;
    }
  }
  printf("A letra %c aparece %d vezes na lista de letras\n",busca,cont);
  return 0;

}