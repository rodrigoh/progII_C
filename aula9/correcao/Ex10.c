//Faça um programa que conte quantas vogais tem na string lida

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char string[50];
  printf("Digite uma string: ");
  gets(string);
  int contVogal=0;
  for(int i=0;string[i]!='\0';i++){
    if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' && string[i]=='u'){
      contVogal++;
    }
  }
  printf("A String %s tem %d vogais\n",string,contVogal);
  return 0;
}