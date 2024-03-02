/* To implement bubble sort*/
#include<stdio.h>
int main()
{
   int a[6],n,i,pass,temp;
   printf("Enter size of array:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Array elements are "); 
   for (i=0;i<n;i++)
	printf("%d\t",a[i]);
   for (pass=0;pass<n-1;pass++)
   {
     for (i=0;i<n-pass-1;i++)
     {
       if (a[i]>a[i+1])
       {
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
       }
     }
   }
   printf("\nBubble sorted array elements are ");
   for (i=0;i<n;i++)
     printf("%d\t",a[i]);
}   
