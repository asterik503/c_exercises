#include <stdio.h>

int main(){
  float a,b;
  printf("Enter any two numbers: ");
  scanf("%f%f",&a,&b);
  printf("The sum is: %0.0f\n",a+b);
  printf("The difference is: %0.0f\n", a-b );
  printf("The product is: %0.0f\n",a*b);
  printf("The quotient is: %0.1f\n",a/b);
  return 0;
}
