#include <stdio.h>
#include <math.h>
int main(void) 
{
	int i,j,n,a[i];
	scanf("%d ",&n);
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	printf("%d ",a[n/2]);
	
	return 0;
}
