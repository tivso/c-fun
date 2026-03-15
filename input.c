#include "stdio.h"
#include "string.h"

int main(){

  int a = 0;
  float d = 0.0f;
  char grade = '\0';
  char name[30] = "";


  printf("enter your age");
  scanf("%d", &a);

  printf("enter your gpa");
  scanf("%f", &d);

  printf("enter your grade");
  scanf(" %c", &grade);


  getchar();
  printf("enter your full name");
  fgets(name, sizeof(name), stdin);
  

printf("%s", name);

  







  // printf("%d", a);




}
