#include<stdio.h>
void main()
{
 int n,flag=0,mid,i,x,space=0,time=0;
 space=7*4;
 printf("enter the number of the elements:");
 scanf("%d",&n);
 int a[n];
 int left=0,right=n-1;
 printf("enter the elements :");
 time++;
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 time++;
 }
 printf("enter the number to be found ");
 scanf("%d",&x);
 time+=3;
 while(left<=right)
 {
  mid=(left+right)/2;
  if(x==a[mid])
  {
  printf("element is found at %d\n",mid+1);
  flag=1;
  break;
  }
  else if(x<a[mid])
  {
   left=mid+1;
   continue;
   }
   else if (x<a[mid])
   {
   right=mid-1;
   continue;
   }
   time+=3;
   }
   if (flag==0)
   {
   printf("enter the element not found");
   time++;
   time+=1;
   }
   else 
   {
   printf("element found");
   }
   time++;
   printf("space complexity is :%d\n",space);
   printf("time complexity is :%d\n",time);
   }
  
  
  
