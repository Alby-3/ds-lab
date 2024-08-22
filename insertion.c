#include<stdio.h>
void main()
 {
 int j,n,temp,space,time;
 space=5*4;
 int i=1;
 printf("enter total number of elements");
 scanf("%d",&n);
 time+=2;
 int a[n];
 printf("enter the elements of array");
 time ++;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  time++;
  }
  time++;
  time+=1;
  for(i=1;i<n;i++)
   {
    temp=a[i];
    j=i-1;
    while(j>=0 && temp<a[j])
    {
    a[j+1]=a[j];
    j--;
    }
    a[j+1]=temp;
    }
    time++;
    printf("the sorted elements are \n");
    for(i=0;i<n;i++)
    {printf("\t%d",a[i]);
    time++;
    }
    
    time++;
    time+=1;
    printf("space complexity is %d :\n",space);
    printf("time complexity is %d :\n",time);
    }
    
    
    
    
