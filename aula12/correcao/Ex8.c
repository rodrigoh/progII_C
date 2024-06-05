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
  for(int i=0;i<10;i++){
    int face = dado();
    printf("Saiu o lado %d\n",face);
  }
  return 0;
}