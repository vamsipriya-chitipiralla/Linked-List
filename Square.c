#include<stdio.h>
void main()
{
	int a[10],b[10],i,n;
	printf("enter the numbers");
	scanf("%d",&n);
	printf("enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i]*a[i];
		printf("the square of the number is a[%d]:%d\n",i,b[i]);
	}

	
}
