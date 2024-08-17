# include <stdio.h>
void main()
{
   int n,a[100],i,j,s,c,x,tp=0,left,right,mid,flag=0,t=0;
   t+=3;
   printf("\nenter the size of the array");
   t++;
   scanf("%d",&n);
   t++;
   printf("\nenter the values");
   t++;
   t++;
   for (i=0;i<n;i++)
   {
     t++;
     scanf("%d",&a[i]);
     t++;
   }
   t+=2;
   for(i=0;i<(n-1);i++)
   {
     t++;
     for(j=0;j<(n-i-1);j++)
     {
        t++;
        if (a[j]>a[j+1])
        {
           t++;
           c=a[j];
           a[j]=a[j+1];
           a[j+1]=c;
        }
     }
   }
   printf("\n\nthe sorted array is \n\n");
   t++;
   t++;
   for(s=0;s<n;s++)
   {
      t++;
      printf("%d\t",a[s]);
      t++;
   }
   printf("\nenter the element to be search");
   t++;
   scanf("%d",&x);
   t++;
   left=0,right=n-1;
   t++;
   t+=2;
   while(left<=right)
   {
      t++;
      mid=(left+right)/2;
      if(x==a[mid])
      {
         t++;
         flag=1;
         break;
      }
      else if(x>a[mid])
      {
         left=mid+1;
      }
      else if(x<a[mid])
      {
          right=mid-1;
      }
   }
   t++;
   if(flag==0)
   { 
      printf("element not found.....\n");
      t++;
   }
   else
   {
      printf("element found...\n");
      t++;
   }
   printf("\nspace complexity=%d",((10*4)+(4*n)));t+=2;
   printf("\ntime complexity=%d",t);
}
   
   
