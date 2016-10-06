#include<stdio.h>
void main()
{
	int a[100],i,j,n,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{ 
		c=0;
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
					c++;
					printf("%d",a[j]);
					break;
			}
		if(c!=0)
			break;
    }
		 	
}
