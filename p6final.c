#include<stdio.h>
void input_two_strings(char *a, char *b)
{
 printf("enter the strings\n");
 scanf("%s%s", a, b);
}
int cmp(char*a,char*b)
{
  int i;
  for(i=0; a[i] && (a[i] == b[i]); i++);
  return a[i] - b[i];
}
void output(char *a, char *b, int ans)
{
  if(ans<0)
  {
    printf("%s is greateer than %s\n",b,a);
  }
  else if(ans > 0)
  {
    printf("%s is greater than %s\n", a,b);
  }
  else
  {
    printf("%s is equal to %s\n", b, a);
  }
}
int main()
{
  char a[50], b[50];
  int ans;
  input_two_strings(a, b);
  ans = cmp(a, b);
  output(a, b, ans);
  return 0;
}