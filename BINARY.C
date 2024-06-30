#include<conio.h>
#include<stdio.h>
#include<time.h>
void binary(int a[],int ele,int l,int h);
void main()
{
	int n,beg,end,key,i,mid,a[10];
	double dt;
	clock_t st,et;
	clrscr();
	st=clock();
	printf("Enter The Array Size\n");
	scanf("%d",&n);
	printf("Enter The Array Elements\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	beg=0;
	end=n-1;
	printf("enter the elemets to search\n");
		scanf("%d",&key);
	binary(a,key,beg,end);
	et=clock();
	dt=(double)(et-st)/CLOCKS_PER_SEC;
	printf("Time Taken %f",dt);
	getch();
}
void binary(int a[],int ele,int l,int h)
{
	int mid,flag;
	if(l>h)
	{
		printf("Element not found");
		return;
	}
	else
	{
		mid=(l+h)/2;
		if(a[mid]==ele)
		{
			printf("elements found at %d ",mid+1);
		return;

		}
		if(a[mid]>ele)
			 binary(a,ele,l,mid-1);
		else
			 binary(a,ele,mid+1,h);
	}
}