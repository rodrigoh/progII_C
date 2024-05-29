#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int multiplica(int n1, int n2, int n3);

int main(){
  int a = 10;
  int b = 15;
  int c = 5;
  int mult = multiplica(a,b,c);
  printf("%d\n",mult);
  return 0;
}

int multiplica(int n1, int n2, int n3){
  return n1*n2*n3;
}