#include <stdio.h>

void input_n_and_r(int *n, int *r)
{
  printf("enter n and r\n");
  scanf("%d%d",n,r);
}

int factorial(int n)
 {
	int factorial = 1;
	for (int i = 2; i <= n; i++)
		factorial = factorial * i;
	return factorial;
}

int ncr(int n, int r)
{
	return factorial(n) / (factorial(r) * factorial(n - r));
}

void output(int n, int r, int result)
{
  printf("the ncr of %d and %d is %d",n,r,result);
}

int main()
{
	int n ,r,f,result;
  input_n_and_r(&n,&r);
  f=factorial(n);
  result=(n,r);
	result=ncr(n, r);
  output(n,r,result);
	return 0;
}