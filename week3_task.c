#include <stdio.h>
#include <math.h>

//Function declaration
int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
//int div(int num1, int num2);

void div(int num1, int num2, int *quotient, int *remainder)
{
  *quotient = num1/num2;
  *remainder = num1%num2;
}

// start main program
int main()
{
  // initalise variables
  int a,b;
  int sum,subtract,multi;
  float division;
  
  printf("Enter first value :");
  scanf("%d", &a);
  printf("Enter second value :");
  scanf("%d", &b);

  sum = add(a,b);
  subtract = sub(a,b);
  multi = mult(a,b);
  division = div(a,b,*quotient,*remainder);    // div(a,b)+(a%b/(float)b);

  printf("Value 1 add Value 2 is: %d\n", sum);
  printf("Value 1 subtract Value 2 is: %d\n", subtract);
  printf("Value 1 multiplied by Value 2 is: %d\n", multi);
  printf("Value 1 divided by Value 2 is: %.2f\n", division);
  
  return 0;
}

// Function returning the sum of two numbers.
int add(int num1, int num2)
{
  // initalise variables
  int plus;

  plus = num1 + num2;

  return plus;
}

// Function returning num1 subtract num2.
int sub(int num1, int num2)
{
  // initalise variables
  int minus;

  minus = num1 - num2;

  return minus;
}

// Function returning num1 multiplied by num2.
int mult(int num1, int num2)
{
  // initalise variables
  int times;

  times = num1 * num2;

  return times;
}
