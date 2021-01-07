#include<stdio.h>
/* c program to perform selection sort in an static array*/ 

int main()
{
	int a[100];
	int n,i,j,temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);//array size reading 
	printf("Enter the array elements: ");//elements reading
	for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
     }
     for(i=0;i<n-1;i++)
     {
     	int index=i;
     	for(j=i+1;j<n;j++)//start from next element of i
     	{
     	if(a[index]>a[j])//checking for greater element
		 {
		 	index=j;//moving index to next position
	     }	 
	     if(index!=i)//comparing and swapping positions
	     {
	     	temp=a[i];
	     	a[i]=a[index];
	     	a[index]=temp;
		 }
		}
      }
    printf("Sorted array is : ");
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);//display
	}
	 return 0;
}
