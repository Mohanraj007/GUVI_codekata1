#include <stdio.h>

int main(void) {
	int a[3],i,j;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		int tmp;
		if(a[i]>a[j])
		{
		tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		}
		}
	}
	printf("%d",a[0]);
  return 0;
}
