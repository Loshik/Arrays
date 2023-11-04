#include<stdio.h>
#include<math.h>
int main()
{
	int n,f,l,count=0;
	printf("Enter the value of n :");
	scanf("%d",&n);
	int temp=n;
	l=n%10;
	while(temp>0)
	{
		count=count+1;
		temp=temp/10;
	}
	f=n/(pow(10,count-1));
	printf("%d",f+l);
	return 0;
}