#include<stdio.h>
void main()
{
	int n1,n2;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("gcd of %d and%d is...",n1,n2);
	while(n1!=n2)
	{
		if(n1>n2-1)
		n1=n1-n2;
	else
	n2=n2-n1;
	}
	printf("%d\n",n1);
}
