#include <stdio.h>
int main(void) 
{
	char alph[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int n;
	scanf("%d",&n);
	printf("%c",alph[n-1]);
	return 0;
}
