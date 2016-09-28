#include<stdio.h>
void main()
{
	int a[100],i,j,n,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
				c++;
			}
		if(c==1)
			break;
    }
    if(c==0)
    	printf("All are unique nos");
		 	
}
