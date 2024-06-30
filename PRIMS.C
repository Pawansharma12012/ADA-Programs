#include<conio.h>
#include<stdio.h>
#include<time.h>
void main()
{
	int vis[10],i,j,c[10][10],n,ne=1,mincost=0,min;
	int a,b,u,v;
	clrscr();
	printf("\ntnter the maximun node\n");
	scanf("%d",&n);
	printf("\nEnter the cost matrix");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&c[i][j]);
			if(c[i][j]==0)
				c[i][j]=999;
		}
	vis[1]=1;
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(c[i][j]<min)
				{
					if(vis[i]!=0)
					{
						min=c[i][j];
						a=u=i;
						b=v=j;
		 }	 }	 }	}
		if(vis[u]==0||vis[v]==0)
		{
			printf("Edge %d (%d%d) cost =%d",ne++,a,b,min);
			mincost=mincost+min;
			vis[b]=1;
		}
		c[a][b]=c[b][a]=999;
	}
	printf("Minimum Cost=%d",mincost);
	getch();
}
