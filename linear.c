#include<stdio.h>
void main()
{
  int a[5],count=0,n,i,element,time =0,space=0;
  printf("enter the size of the array ");
  scanf("%d",&n);
  time+=2;
  space=n*4;
  time++;
  printf("enter the elements of array");
  for (i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     }
     time++;
     printf("enter the number to be  searched=");
     scanf("%d",&element);
     for(i=0;i<n;i++)
      {
      if(element==a[i])
      {
      printf("the element is found at  %d  position \n",i+1);
      count=1;
      }
     }
     time++;
     if(count==0)
     {
     printf("the element is not found\n");
   }
     
    
     time+=5;
     printf("time complexity %d\n",time);
     printf("space complexity %d",space);
     }
     
     
