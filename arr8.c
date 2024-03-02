/* To merge two arrays into a new array*/
#include<stdio.h>
int main()
{
   int a[5],b[5],c[10],n1,n2,i,j;
   printf("Enter size of array1:");
      scanf("%d",&n1);
   printf("Enter %d no of elements in array1 ",n1);   
   
   for (i=0;i<n1;i++)
      scanf("%d",&a[i]);
   printf("Array1 elements are:");
   for (i=0;i<n1;i++)
	   printf("%d\t",a[i]);

   printf("\nEnter size of array2:");
   scanf("%d",&n2);
   printf("Enter %d no of elements in array2 ",n2);
 
   for (i=0;i<n2;i++)
   	   scanf("%d",&b[i]);
   printf("Array2 elements are ");
   for (i=0;i<n2;i++)
	   printf("%d\t",a[i]);
   for (i=0;i<n1;i++)
	   c[i]=a[i];

   for (j=0;j<n2;j++)
   {	   c[i]=b[j];
           i++;
   }
   printf("\nMerged array elements are ");
   for (i=0;i<n1+n2;i++)
	   printf("%d\t",c[i]);
}   
