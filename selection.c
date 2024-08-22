#include<stdio.h>
void main()
{
 int a[10],n,j,small,i=0,temp;
 printf("enter the element of array ");
 scanf("%d",&n);
 printf("enter the numbers \n");
 for (i=0;i<5;i++)
  {
  scanf("%d",&a[i]);
  }
   for(i=0;i<n-1;i++)
   {
   small=i;
    for (j=i+1;j<n;j++)
    {
    if(a[j]<a[small])
    {
    small=j;
    }
    }
    if(i!=small)
    {
    temp=a[i];
    a[i]=a[small];
    a[small]=temp;
    }
    }
    printf("sorted array is  \n");
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
    }
