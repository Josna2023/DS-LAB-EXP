#include<stdio.h>
void main()
{
  int i,j,m=1,r,c;
  printf("enter the no of rows and columns");
  scanf("%d%d",&r,&c);
  int a[10][10],b[10][3];
  for(i=0;i<r;i++)
  {
    printf("enter tyhe elements of row%d",i+1);
    for(j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
  }
  printf("matrix is \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  b[0][0]=r;
  b[0][1]=c;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if (a[i][j]!=0)
      {
         b[m][0]=i;
         b[m][1]=j;
         b[m][2]=a[i][j];
         m++;
      }
   }
  }
  b[0][2]=m-1;
  printf("row\tcolumn\tvalue\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t\t",b[i][j]);
    }
    printf("\n\n");
  }
  }
