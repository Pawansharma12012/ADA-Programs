#include<conio.h>
#include<stdio.h>
void mergesort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);
void main()
{
	int n,a[10],i,j;
	clrscr();
	printf("Enter the size");
	scanf("%d",&n);
	printf("Enter the element");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	getch();
}
void mergesort(int a[],int low,int high)
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
void merge(int a[],int low,int mid,int high)
{
	int i,j,k,c[100];
	i=low;
	k=low;
	j=mid+1;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=a[j];
			k++;
			j++;
		}
	}
		while(i<=mid)
		{
			c[k]=a[i];
			k++;
			i++;
		}
		while(j<=high)
		{
			c[k]=a[j];
			k++;
			j++;
		}
		for(i=low;i<=high;i++)
		a[i]=c[i];
}


