/* To check whether an array of integers contain any duplicate element or not*/
#include<stdio.h>
int main()
{
   int a[6],n,i,j,flag;
   printf("Enter size of array:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Array elements are ");
   for (i=0;i<n;i++)
	printf("%d\t",a[i]);
   for (i=0;i<n;i++)
   {
      for (j=i+1;j<n;j++)
      {
         if (a[i]==a[j] && i!=j)
         {
            printf("\nDuplicate element %d is found at loc %d and %d",a[i],i,j);
            flag=1;
         }
      }
    }
    if (flag==0)
	 printf("No duplicate element found");
}    
