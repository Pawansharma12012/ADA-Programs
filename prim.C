#include <stdio.h>
#include<conio.h>
#define MAX_NODES 10
#define INF 999

void main()
{
    int vis[MAX_NODES], c[MAX_NODES][MAX_NODES], n, ne = 1, mincost = 0, min, a, b, u, v, i, j;
    clrscr();
    printf("\nEnter the maximum number of nodes: ");
    scanf("%d", &n);

    printf("\nEnter the cost matrix (enter 0 for no edge):\n");
    for (i = 0; i < n; i++)
    {
	for (j = 0; j < n; j++)
	{
	    scanf("%d", &c[i][j]);
	    if (c[i][j] == 0)
		c[i][j] = INF;
	}
    }
    for (i = 0; i < n; i++)
    {
	vis[i] = 0;
    }
    vis[0] = 1;
    while (ne < n)
    {
	min = INF;
	for (i = 0; i < n; i++)
	{
	    if (vis[i] == 1)
	    {
		for (j = 0; j < n; j++)
		{
		    if (c[i][j] < min && vis[j] == 0)
		    {
			min = c[i][j];
			a = u = i;
			b = v = j;
		    }
		}
	    }
	}

	if (vis[u] == 1 && vis[v] == 0)
	{
	    printf("Edge %d: (%d,%d) cost = %d\n", ne++, a, b, min);
	    mincost += min;
	    vis[v] = 1;
	}
	c[a][b] = c[b][a] = INF;
    }

    printf("Minimum Cost of Spanning Tree: %d\n", mincost);
    getch();
}
