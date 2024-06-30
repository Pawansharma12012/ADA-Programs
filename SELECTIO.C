#include<conio.h>
#include<stdio.h>
#include<time.h>
void main()
{
	int n,a[10],min,i,j,temp;
	double dt;
	clock_t st,et;
	clrscr();
	st=clock();
	printf("enter the maximum number\n");
	scanf("%d",&n);
	printf("enter the number\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[min])
				min=j;
				temp=a[min];
				a[min]=a[i];
				a[i]=temp;
	}
	printf("After sorting\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	et=clock();
	dt=(double)(et-st)/CLOCKS_PER_SEC;
	printf("Time Taken %f\t",dt);
	getch();
}