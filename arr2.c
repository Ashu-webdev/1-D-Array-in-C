/* To find out the largest and smallest element of an array*/
#include<stdio.h>
int main()
{
   int i,a[6],n,large,small;
   printf("Enter size of array:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Array elements are ");
   for (i=0;i<n;i++)
   	printf("%d\t",a[i]);
   large=a[0];
   small=a[0];
   for (i=0;i<n;i++)	   
   {     if (a[i]>large)
	     large=a[i];
	 else if (a[i]<small) 
	       small=a[i];
	      
   }	
   printf("\nLargest element is %d\n",large);
   printf("Smallest element is %d\n",small);
}    
