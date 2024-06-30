#include<conio.h>
#include<stdio.h>
#include<time.h>
void main()
{
	int result,a,b;
	double dt;
	clock_t st,et;
	clrscr();
	st=clock();
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	result=gcd(a,b);
	printf("The gcd of %d and %d is %d",a,b,result);
	et=clock();
	dt=(double)(et-st)/CLOCKS_PER_SEC;
	printf("\nTime Taken is %d",dt);
	getch();
}
gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		return gcd(a-b,b);
		else
		return gcd(a,b-a);
	}
      return a;
}