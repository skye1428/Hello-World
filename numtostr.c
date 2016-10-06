#include<stdio.h>
void main()
{
	int a,c=0,i=0,n;
	char s[100];
	scanf("%d",&a);
	while(a>0)
	{
		c++;
		n=a%10;
		s[i]=n+96;
		a=a/10;
		i++;
	}
	for(i=c-1;i>=0;i--)
		printf("%c",s[i]);
	
}
