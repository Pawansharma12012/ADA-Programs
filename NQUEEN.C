#include<conio.h>
#include<stdio.h>
#include<math.h>
int a[30],count=0;
void queen(int n);
void printsol(int n);
int place(int pos);
void main()
{
	int n;
	clrscr();
	printf("enter the number of queen");
	scanf("%d",&n);
	queen(n);
	printf("Total solution=%d",count);
	getch();
}
void queen(int n)
{
	int k=1;

	a[k]=0;
	while(k!=0)
	{
		do
		{
			a[k]=a[k]+1;
		}while((a[k]<n)&&!place(k));
		if(a[k]<=n)
		{
			if(k==n)
				printsol(n);
			else
			{
				k++;
				a[k]=0;
			}
		}
		k--;
	}
}
int place(int pos)
{
	int i;
	for(i=1;i<pos;i++)
	{
		if((a[i]==a[pos])||(abs(a[i]-a[pos])==abs([i-pos])))
			return 0;
	}
	return 1;
}
void printsol(int n)
{
	int i,j;
	count++;
	printf("\nSolution %d",count);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==j)
			printf("Q\t");
			else
			print("*\t");
		}
		printf("\n");
	}
}
