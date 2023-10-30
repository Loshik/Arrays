#include<stdio.h>
int main()
{
	int n,i,t;
	printf("Enter the value of n ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[n-i-1]);
	}    
	return 0;
}
