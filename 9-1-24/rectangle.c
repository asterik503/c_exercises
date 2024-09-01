#include <stdio.h>

int main(){
  int height,width;
  printf("Enter height and width: ");
  scanf("%d%d",&height,&width);
  printf("The perimeter is %d\n",2*(height+width));
  printf("The area is %d\n",height*width);
  return 0;
}
