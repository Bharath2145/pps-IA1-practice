 #include<stdio.h>
int main() {
  int n, i, sum = 0;
  printf("Enter the number of integers: ");
  scanf("%d", &n);
  for (i=1; i<=n; ++i) {
      sum += i;
  }
  printf("Sum = %d\n", sum);
  return 0;
}