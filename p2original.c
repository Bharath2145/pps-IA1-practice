#include<stdio.h>
int input()
{
  int a;
  printf("enter the number:\n");
  scanf("%d", &a);
  return a;
}

int cmp(int a, int b, int c)
{
  if(a>b&&a>c)
    {
      return a;
    }
    else if(b>c)
   {
      return b;
    }
    else
    {
      return c;
    }
}
void output(int largest)
{
  printf("the largest is: %d\n", largest);
}
void main()
{
  int a,b,c,largest;
  a = input();
  b = input();
  c = input();
  largest = cmp(a, b, c);
  output(largest);
}