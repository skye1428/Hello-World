#include<stdio.h>
void main()
{
	int a,i,c=0;
	scanf("%d",&a);
	while(a>0)
	{
		a=a/10;
		c++;
	}
	printf("%d",c);
}
