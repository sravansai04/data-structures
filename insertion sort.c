#include<stdio.h>
int main()
{
	int a[100],n,i,j,value;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter value in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=1;i<n;i++)
	{
		value=a[i];
		j=i;
		while(a[j-1]>value && j>0)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=value;
	}
	printf("after sorted");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
