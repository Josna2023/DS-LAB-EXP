# include <stdio.h>
void main()
{
  int i,j,n,temp,tp=0;
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
  for(i=1;i<n;i++)
  {
     tp++;
     temp=a[i];
     j=i-1;
     tp++;
     while (j>=0 && temp<a[j])
     {
        tp++;
        a[j+1]=a[j];
        j--;
     }
     a[j+1]=temp;
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
  printf("space complexity=%d",(4*n)+(5*4));
}
