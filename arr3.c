/* To insert a new element at any desired location of a partially filled array*/
#include<stdio.h>
int main()
{
   int a[10],i,n,pos,ele;
   printf("Enter how many elements:");
   scanf("%d",&n);
   printf("Enter %d no of elements:",n);
   for (i=0;i<n;i++)
	   scanf("%d",&a[i]);
   printf("array elements are:");
   for (i=0;i<n;i++)
	   printf("%d\t",a[i]);
   printf("\nEnter position that you want to insert:");
   scanf("%d",&pos);
   printf("Enter element that you want to insert:");
   scanf("%d",&ele);   
   for (i=n-1;i>=pos;i--)
	   a[i+1]=a[i];
   a[pos]=ele;
   n=n+1;
   printf("Resultant array elements:");
   for (i=0;i<n;i++)
	   printf("%d\t",a[i]);
}   
   			   
      
