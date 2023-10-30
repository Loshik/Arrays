#include<stdio.h>
#define n 6
int main()
{
	int i,t;
	int a[n];
	printf("Enter the elements in the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i+=2)
	{
	t=a[i];
	a[i]=a[i+1];
	a[i+1]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
