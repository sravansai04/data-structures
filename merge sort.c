#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
	int i,temp[100],l,r;
	r=low;
	r=mid+1;
	i=low;
	while(l<=mid&&r<=high)
	{
	
     if(a[l]<a[r])
	{
		temp[i]=a[l];
		i++;
		l++;
	}
	else
	{
		temp[i]=a[r];
		r++;
		i++;
	}
}
while(l<=mid)
{
	temp[i]=a[l];
	l++;
	i++;
}
while(r<=high)
{
	temp[i]=a[r];
	r++;
	i++;
}
for(i=low;i<=high;i++)
{
	a[i]=temp[i];
}
}
void mergesort(int a[10],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void main()
{
	int a[100],i,n;
	printf("enter how many values");
	scanf("%d",&n);
	printf(" enter values into array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge(a,0,n,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
