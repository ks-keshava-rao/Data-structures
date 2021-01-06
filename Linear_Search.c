#include<stdio.h>
//program for linear search in an array
int main()
{
	int a[100],n,i,j,s,t;
	printf("enter the array size");
	scanf("%d",&n);//array size 
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);//array read
	printf("enter the element to search");
		scanf("%d",&s);
	for(j=0;j<n;j++)
	{
		if(a[j]==s)//element search
		{
			t=j;//temp var to display last appearnce
			break;
		}
		
	}
	printf("element found at %d",t);
     return 0;
	
}
