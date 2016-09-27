#include<stdio.h>
void main()
{
	char a;
	scanf("%c",&a);
	if((a>64 && a<91)||(a>96 && a<123))
		printf("Alphabet") ;
	else
		printf("Not an Alphabet");
}
