#include <stdio.h>
int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=tep;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
