#include "stdio.h"


int main(){
  int a = 0;
  int b = 0;
  char op;



    printf("enter your first number");
    scanf("%d", &a);
   
    printf("enter your operator + - * /");
    scanf(" %c", &op);


    printf("enter your second number");
    scanf("%d", &b);
    
   if (op == '+') {
     printf("%d\n", a + b);
  }

  else if (op == '-') {
    printf("%d\n", a - b);
  }

  else if (op == '*') {
    printf("%d\n", a * b);
  }

  else if (op == '/') {
    printf("%d\n", a / b);
  }

  else {
    printf("fuck is u doing brat\n");
  }
    


}
