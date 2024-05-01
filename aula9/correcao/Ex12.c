/*
Leia uma string e em seguida uma letra, remova todas as ocorrências desse caracter da string
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char frase[50];
  char copia[50];
  int contCopia = 0;
  char letra;
  printf("Digite uma frase: ");
  gets(frase);
  setbuf(stdin,NULL);
  printf("Qual caractere devo remover da frase: ");
  scanf("%c",&letra);
  for(int i=0;frase[i]!='\0';i++){
    if(frase[i]!=letra){
      copia[contCopia]= frase[i];
      contCopia++;
    }
  }
  copia[contCopia] = '\0';
  printf("A frase '%s' sem a letra '%c' fica '%s'\n",frase,letra,copia);
  return 0;
}