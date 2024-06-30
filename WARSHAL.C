#include<conio.h>
#include<stdio.h>
void main()
{
	int k,a[10][10],n,p[10][10],i,j;
	clrscr();
	printf("Enter the node");
	scanf("%d",&n);
	printf("\nEnter the cost matric:");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			p[i][j]=a[i][j];
	for(k=0;k<n;k++)
	{
		for(i=0;i<k;i++)
		{
			for(j=0;j<n;j++)
			{
				if((p[i][j]==1)||(p[i][k]==1&&p[k][j]==1))
				{
					p[i][j]=1;
				}
			}
		}
	}
				printf("The path matrix shown below");
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						printf("%d",p[i][j]);
						getch();
}