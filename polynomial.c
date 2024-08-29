# include<stdio.h>
struct poly{
  int coeff;
  int expo;
};
void main()
{
  int n,i;
  printf("enter the number of terms in the polynomial\n");
  scanf("%d",&n);
  struct poly x[n];
  printf("enter the elements of the polynomial\n");
  printf("coefficients and exponents should be in decreasing order\n");
  for(i=0;i<n;i++)
  {
     printf("coefficient\n");
     scanf("%d",&x[i].coeff);
     printf("exponent\n");
     scanf("%d",&x[i].expo);
  }
  printf("the entered element in polynomial form\n");
  for(i=0;i<n;i++)
  {
     printf("(%dx^%d)",x[i].coeff,x[i].expo);
     if(i<(n-1))
     {
        printf("+");
     }
  }
}
