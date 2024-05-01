/*Declare duas strings com capacidade para 20 caracteres. 
Leia pela entrada padrão a primeira string. Em seguida, 
copie o texto da primeira string para a segunda. 
Imprima no final o conteúdo das duas strings.
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char stringUm[20];
  char stringDois[20];
  printf("Digite uma palavra ou frase de até 19 caracteres: ");
  gets(stringUm);
  //Opção um  
  int i;
  for(i=0;i<20;i++){
    stringDois[i] = stringUm[i];
  }
  //Opção dois
  // for(i=0;stringUm[i]!='\0';i++){
  //   stringDois[i] = stringUm[i];
  // }
  // stringDois[i] = '\0';
  printf("A String um tem o conteúdo \n%s\n",stringUm);
  printf("A String dois tem o conteúdo \n%s\n",stringDois);
  return 0;
}