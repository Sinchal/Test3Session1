#include <stdio.h>

int input_size()
{
  int n;
  printf("Enter how many numbers you want to compare\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
 for(int i=0;i<n;i++)
 {
   printf("Enter the element no %d of the array\n",i);
   scanf("%d",&a[i]);
 }
}

int find_largest(int n, int a[n])
{
  int max = a[0];
  int largest = 0;
  for (int i = 0; i < n; i++) 
  {
   if (max < a[i]) 
   {
     max = a[i];
     largest = i;
   }
  }
  return largest;
}

void out_put(int n, int a[n], int largest)
{
  printf("Index position of Maximum value in the array is  : %d\n",largest);
}

int main()
{
  int n,a[100],largest;
  n=input_size();
  input_array(n,a);
  largest=find_largest(n,a);
  out_put(n,a,largest);
  return 0;
}