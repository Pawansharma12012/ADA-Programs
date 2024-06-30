#include<conio.h>
#include<stdio.h>
int a[10];
int max,min;
void maxmin(int i,int j);
void main()
{
	int n,i;
	clrscr();
	printf("enter the sixe");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	maxmin(0,n);
	printf("The max is %d",max);
	printf("Min is %d",min);
	getch();
}
void maxmin(int i,int j)
{
	int mid,max1,min1;
	if(i==j)
	{
		max=min=a[i];
	}
      else if(i==j-1)
	{
		if(a[i]<a[j])
		{
			max=a[j];
			min=a[i];
		}
		else
		{
			max=a[i];
			min=a[j];
		}
	}
	else
	{
		mid=(i+j)/2;
		maxmin(i,mid);
		max1=max;
		min1=min;
		maxmin(mid+1,j);
		if(max<max1)
		{
			max=max1;
		}
		else
		{
			min=min1;
		}
	}
}
