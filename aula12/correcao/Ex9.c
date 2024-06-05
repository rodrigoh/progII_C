#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


int dado(){
  //Função rand() é de 0 até o limite -1
  return rand()%6+1;
}

int main(){
  system("cls");
  srand(time(NULL));
  int maximoJogadas = 1000000;
  int face1=0;
  int face2=0;
  int face3=0;
  int face4=0;
  int face5=0;
  int face6=0;
  for(int i=0;i<maximoJogadas;i++){
    int face = dado();
    if(face==1)
      face1++;
    else if(face==2)
      face2++;
    else if(face==3)
      face3++;
    else if(face==4)
      face4++;
    else if(face==5)
      face5++;
    else
      face6++;
  }

  float pFace1 = face1/(float)maximoJogadas*100;
  float pFace2 = face2/(float)maximoJogadas*100;
  float pFace3 = face3/(float)maximoJogadas*100;
  float pFace4 = face4/(float)maximoJogadas*100;
  float pFace5 = face5/(float)maximoJogadas*100;
  float pFace6 = face6/(float)maximoJogadas*100;
  printf("A face 1 do dado saiu %d vezes o que represente %.2f %% das vezes\n",face1, pFace1);
  printf("A face 2 do dado saiu %d vezes o que represente %.2f %% das vezes\n",face2, pFace2);
  printf("A face 3 do dado saiu %d vezes o que represente %.2f %% das vezes\n",face3, pFace3);
  printf("A face 4 do dado saiu %d vezes o que represente %.2f %% das vezes\n",face4, pFace4);
  printf("A face 5 do dado saiu %d vezes o que represente %.2f %% das vezes\n",face5, pFace5);
  printf("A face 6 do dado saiu %d vezes o que represente %.2f %% das vezes\n",face6, pFace6);
  return 0;
}