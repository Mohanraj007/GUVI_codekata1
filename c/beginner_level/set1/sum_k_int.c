#include <stdio.h>
int main(void) {
	int a,sum=0,b,num[100];
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<b;i++)
	{
	sum=sum+num[i];	
	}
	printf("%d",sum);
	return 0;
}
