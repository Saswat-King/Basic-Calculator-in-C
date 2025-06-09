#include <stdio.h>
int main()
{ int num1, num2;
  char Add ,Sub ;

  printf("Welcome to C Calculator\n");
  printf("Enter The Number one: ");
  scanf("%d",&num1);

  printf("Enter the Operator: + , - : ");
  scanf(" %c" , &Add , &Sub);
  
  printf("Enter The Number 2: ");
  scanf("%d",&num2);

  if(Add=='+')
  {
   printf("%d + %d = ",num1,num2);
   printf("%d ",num1+num2);
  }
  else
  {
    printf("%d - %d = ",num1,num2);
    printf("%d ",num1-num2);
  }

return 0;

}
