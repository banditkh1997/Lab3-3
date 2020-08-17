#include <stdio.h>
int main(void)
{
  float a, b,total;
  printf("Enter A : ");
  scanf("%f", &a);
  printf("Enter B : ");
  scanf("%f", &b);
  total=a*b;
  printf("Total = %.2f\n",total);
  return 0;
}
