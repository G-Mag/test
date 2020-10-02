#include <stdio.h>

//Function declaration
int max(int num1, int num2);

// start main program
int main()
{
  // initalise variables
  int a,b;
  int ret;

  printf("Enter first value :");
  scanf("%d", &a);
  printf("Enter second value :");
  scanf("%d", &b);

  ret = max(a,b);

  printf("Max value is: %d\n", ret);


  return 0;
}

// Function returning the max between two numbers. Later called above in ret = max(a,b)
int max(int num1, int num2)
{
  // initalise variables
  int result;

  if (num1 > num2)
    result = num1;
  else
    result = num2;


  return result;
}