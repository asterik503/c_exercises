#include <stdio.h>

int main(){
  int current_year,birth_year;
  printf("Enter current year and birth year: ");
  scanf("%d%d",&current_year,&birth_year);
  printf("Your age is: %d\n",current_year-birth_year);
  return 0;
}
