/* To delete an element from a given position of an array*/
#include<stdio.h>
int main()
{
   int a[6],i,n,pos,ele;
   printf("Enter size of array:");
   scanf("%d",&n);
   printf("Enter %d no of elements",n);
   for (i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Array elements are ");
   for (i=0;i<n;i++)
	printf("%d\t",a[i]);
   printf("\nEnter  position of element to be deleted:");
   scanf("%d",&pos);
   printf("Enter element from array to be deleted:");
   scanf("%d",&ele);
   for (i=pos;i<n;i++)
	   a[i]=a[i+1];
   n=n-1;
   printf("Resultant array elements are");
   for (i=0;i<n;i++)
	   printf("%d\t",a[i]);
}

