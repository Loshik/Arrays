#include<stdio.h>
int main()
{
	  int n,i,k,count=0;
	  printf("Enter the value of n :");
	  scanf("%d",&n);
	  int a[n];
	  printf("Enter the value of k :");
	  scanf("%d",&k);
	  printf("Enter the elements in the array \n");
	  for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]==k)
	  	count+=1;
	  }
	  printf("%d",count);
	  return 0;
}