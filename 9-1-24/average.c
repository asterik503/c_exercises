#include <stdio.h>

int main(){
  int a,b,c;
  printf("Enter any two numbers: ");
  scanf("%d%d",&a,&b);
  c = a+b;
  printf("The average is %0.1f\n",c/2.0);
  return 0;
}
