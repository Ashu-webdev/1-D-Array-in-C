/* To find out the mean of n nos using array*/
#include<stdio.h>
int main()
{
   int i,a[6],n,sum=0;
   float mean;
   printf("Enter no of elements:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
	   scanf("%d",&a[i]);
   printf("Array elements are:");
   for (i=0;i<n;i++)
   {    printf("%d\t",a[i]);
       sum=sum+a[i];
       mean=sum/(float)n;
   }    
   printf("\nSum of array elements=%d",sum);
   printf("\nMean of array elemts=%f\n",mean);
}   
