/* To find the second largest element of an array*/
#include<stdio.h>
int main()
{
   int a[6],max=0,largest,sec_large=-1111,n,i;
   printf("Enter size of array:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
	   scanf("%d",&a[i]);
   printf("Array elements are ");
   for (i=0;i<n;i++)
	   printf("%d\t",a[i]);
   largest=a[0];
   for (i=0;i<n;i++)
	   if (a[i]>largest)
		   largest=a[i];
   for (i=0;i<n;i++)
   {
      if (a[i]!=largest)
      {
	   if (a[i]>sec_large)
		   sec_large=a[i];
      }
   }
   printf("Second largest of array is %d\n",sec_large);
}  
     	      
