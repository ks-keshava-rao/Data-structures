#include<stdio.h>
/*c program for Bubble sort in an static array*/
int main()
{
	int a[100];
	int n,i,j,temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);//array size reading 
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);//array elements reading
     }
     for(i=0;i<n-1;i++)
     {
     	for(j=0;j<n-1-i;j++)//last sorted element will be excluded in next iteration 
     	{
     	if(a[j]>a[j+1])//check nxt element is greater or not
		  {
		  	/*swap value at array positions*/
		    temp=a[j];
		 	a[j]=a[j+1];//assigning proceeding element to preceeding element 
		 	a[j+1]=temp;
	      }
		}
	 }
	 printf("Sorted array is: ");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",a[i]);//sorted array display
	 }
    return 0;
}
