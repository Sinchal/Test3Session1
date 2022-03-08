#include<stdio.h>

typedef struct fraction
{
int num,den;
}  fraction;

fraction input_fraction()
{
  fraction f;
  printf("enter the fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}

fraction smallest_fraction(fraction f1, fraction f2, fraction f3)
{
  fraction small;
  fraction temp;
  if(f1.num<f2.num && f1.num<f3.num)
    small=f1;
  if(f2.num<f1.num && f2.num<f3.num)
    small=f2;
  if(f3.num<f1.num && f3.num<f2.num)
    small=f3;
  temp.num=small.num;
  temp.den=small.den;
  return temp;
}

void output(fraction f1, fraction f2, fraction f3, fraction small)
{
  printf("smallest of %d/%d , %d/%d and %d/%d is %d/%d", f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,small.num,small.den);
}

int main()
{
  fraction f1,f2,f3,small;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  small=smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,small);
  return 0;
}