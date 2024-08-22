#include<stdio.h>
#define MAX 10 
void main()
{
int a[10][10],b[10][10],r,c,i,j,k;
 printf("\n enter the order of the matrix");
 scanf("%d%d",&r,&c);
 printf("\n enter the element of the matrix ");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
    scanf("%d",&a[i][j]); 
    
	}}
	printf("\n the matrix is \n");
	for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
   printf("%d \t",a[i][j]);
   }
   printf("\n");
   }
	k=1;
	b[0][0]=r;
	b[0][1]=c;
   for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
    if(a[i][j]!=0)
    {
     b[k][0]=1;
     b[k][1]=j;
     b[k][2]=a[i][j];
     k++;
     }
     }}
     b[0][2]=k-1;
     printf("the sparse matrix is \n");
     for(i=0;i<k;i++)
     {
      for(j=0;j<3;j++)
      {
      printf("%d\t",b[i][j]);
      } 
      printf("\n");
      }
}
