/* To reverese an array*/
#include<stdio.h>
int main()
{
   int a[6],b[6],i,j=0,n;
   printf("Enter size of array:");
   scanf("%d",&n);
   printf("Enter %d elements of array ",n);
   for (i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Array elements are ");
   for (i=0;i<n;i++)
	   printf("%d\t",a[i]);
  
  
   printf("\nReversal array elements are ");
   for (i=n-1;i>=0;i--)
   {    b[j]=a[i];
       j++;
   }    
   for (j=0;j<n;j++)
     printf("%d\t",b[j]);	   
  
}   
