#include<conio.h>
#include<stdio.h>
#include<time.h>
void main()
{
	int i,j,m,n,k=-1,flag=0;
	char t[10],p[10];
	double dt;
	clock_t st,et;
	clrscr();
	printf("\nEnter the text:\n");
		gets(t);
	printf("Enter the pattern:\n");
		gets(p);
	n=strlen(t);
	m=strlen(p);
	st=clock();
	for(i=0;i<=n-m;i++)
	{
		j=0;
		while(j<m&&p[j]==t[i+j])
		{
			j++;
		}
		if(j==m)
		{
			flag=1;
			k=i+1;
			break;
		}
	}
	if(flag==1)
		printf("Pattern found at %d\n",k);
	else
		printf("pattern not found");
	et=clock();
	dt=(double)(et-st)/CLOCKS_PER_SEC;
	printf("time Taken %f",dt);
	getch();
}