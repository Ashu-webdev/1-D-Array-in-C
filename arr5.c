/* To implement linear search on an array*/
#include<stdio.h>
int main()
{
   int a[6],n,i,key,pos,flag;
   printf("Enter size of array:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Array elements are ");
   for (i=0;i<n;i++)
	   printf("%d\t",a[i]);
   printf("\nEnter  key to be linearly searched:");
   scanf("%d",&key);
   for (i=0;i<n;i++)
   {	if (a[i]==key)
	{
	   pos=i;
	   flag=1;
	   printf("%d key is found at %d index\n",key,pos);
	   break;
	}
   }	
   if (flag==0)
	   printf("key not found in array\n");
   
}   
