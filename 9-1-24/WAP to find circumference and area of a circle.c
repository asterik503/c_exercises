#include <stdio.h>

int main(){
  float const PI=3.14;
  float radius;
  printf("Enter the radius: ");
  scanf("%f",&radius);
  printf("The perimeter is %0.1f\n",2.0*PI*radius);
  printf("The area is %0.1f\n",PI*radius*radius);
  return 0;
}
