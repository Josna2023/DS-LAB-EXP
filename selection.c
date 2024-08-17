# include <stdio.h>
void main()
{
  int i,j,n,small,temp,tp=0;
  tp+=1;
  printf("enter the number of elements");
  tp++;
  scanf("%d",&n);
  tp++;
  int a[n];
  printf("enter the elements");
  tp++;
  tp++;
  for (i=0;i<n;i++)
  {
     tp++;
     scanf("%d",&a[i]);
     tp++;
  }
  tp++;
  tp++;
  for(i=0;i<(n-1);i++)
  {
    tp++;
    for (j=i+1;j<n;j++)
    {
       tp++;
       if (a[j]<a[small])
       {
          tp++;
          small=j;
       }
    }
    if (small!=a[i])
    {
      tp++;
      temp=a[i];
      a[i]=a[small];
      a[small]=temp;
    }
  }
  printf("\n\nthe sorted array is.......\n");
  tp++;
  tp++;
  for(i=0;i<n;i++)
  {
     tp++;
     printf("%d\n",a[i]);
     tp++;
  }
  printf("time complexity=%d",tp);
  printf("space complexity=%d",(4*n)+(6*4));
}
