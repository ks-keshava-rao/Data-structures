#include<stdio.h>
//program for binary search in an array
int main()
{
	int i,n,arr[100],find_ele;
	printf("Enter the elements in the array ");
	scanf("%d",&n);//Size reading
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//Array reading
	}
	printf("Enter the search element ");
	scanf("%d",&find_ele);//search element;
	int l,r,mid;/*l=least index valuer=highest index value*/
	l=0;          
	r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;//finding mid element of the array
		if(arr[mid]<find_ele)
		{
			l=mid++;//increment mid to read right array values
		}
		else if(arr[mid]==find_ele)//find element at mid
		{
			printf("elements found at index:%d",mid);
			break;
		}
	    else
	     r=mid-1;
       }
      return 0;       
}
