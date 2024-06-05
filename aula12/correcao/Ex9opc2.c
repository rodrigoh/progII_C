#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


int dado(){
  //Função rand() é de 0 até o limite -1
  return rand()%6;
}

int main(){
  system("cls");
  srand(time(NULL));
  int maximoJogadas = 1000000;
  int jogadas[] = {0,0,0,0,0,0};

  for(int i=0;i<maximoJogadas;i++){
    int face = dado();
    jogadas[face]++;
  }

  for(int i=0;i<6;i++){
    float pFace = jogadas[i]/(float)maximoJogadas*100;
    printf("A face %d do dado saiu %d vezes o que represente %.2f %% das vezes\n",i+1,jogadas[i], pFace);
  }
  return 0;
}