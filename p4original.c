#include<stdio.h>

int input_degree()
{
  int n;
  printf("Enter degree of the polynomial\n");
  scanf("%d",&n);
  return n;
}

float input_x()
{
  float x;
  printf("Enter the value of x\n");
  scanf("%f",&x);
  return x;
}

void input_coefficients(int n, float a[n])
{
 printf("Enter coefficient's of the polynomial x \n");
  int i;
  for(i=n;i>=0;i--)
  {
    printf("Enter Coefficient of [ X^%d ] \n",i);
    scanf("%f",&a[i]);
  }
}

float evaluate_polynomial(int n, float a[n], float x)
{
  float sum=0;
  int i;
  for(i=n;i>0;i--)
   {
     sum=(sum+a[i])*x;
   }
  sum=sum+a[0];
  return sum;
}

void out_put(int n, float a[n], float x, float result)
{
  printf("Value of the polynomial is = [ %f ]\n",result);
}

int main()
{
  float a[100],result,x;
  int n;
  n=input_degree();
  x=input_x();
  input_coefficients(n,a);
  result=evaluate_polynomial(n,a,x);
  out_put(n,a,x,result);
  return 0;
}