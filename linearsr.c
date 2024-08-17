// linear search prog ......

# include<stdio.h>
void main()
{
  int n,i,sr,x,count=0,a[100];
  int spacecom,timecom=0;
  timecom+2;
  printf("\nenter the size of the array");
  timecom++;
  scanf("%d",&n);
  timecom++;
  printf("\nenter the values");
  timecom++;
  for (i=0;i<n;i++)
  {
     timecom++;
     scanf("%d",&a[i]);
     timecom++;
  }
  timecom++;
  printf("\nenter the element to be search");
  timecom++;
  scanf("%d",&sr);
  timecom++;
    timecom++;
  for (i=0;i<n;i++)

  {
     timecom++;
     timecom++;
     if (sr==a[i])
     {
        timecom++;
        count++;
        printf("\nelement found at %d position",i+1);
        timecom++;
     }
  }
  if(count>0)
  {
     timecom++;
     printf("\n element found");
     timecom++;
  }
  else
  {
     timecom++;
     printf("\nelement not found");
     timecom++;
  }
  spacecom=(7*4)+(4*n);
  printf("spacecomplexity is %d",spacecom);
  timecom++;
  printf("timeccomplexity is %d",timecom);
  timecom++;
}
          
