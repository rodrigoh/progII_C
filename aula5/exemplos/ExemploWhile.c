#include<stdio.h>

int main(){
  int cont=10;
  while(cont>=0){
    printf("%d ",cont--);
    //cont = cont-1 -> cont-- -> cont-=1
  }
  return 0;
}