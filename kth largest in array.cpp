#include<stdio.h>
int main()
{
	int n,i,j,t,k;
	int a[i];
	printf("Enter the value of k ");
	scanf("%d",&k);
	printf("Enter the value of n ");
	scanf("%d",&n);
	printf("Enter the elements in the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	}
	printf("The kth largest element present in the array is %d",a[n-k]);
	printf("The kth smallest element present in the array is %d",a[k-1]);
	return 0;
}
