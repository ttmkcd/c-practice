#include <stdio.h>

int main()
{
	int n;
	scanf ("%d", &n);
	if (n>0){
		printf("正数\n");
	} else if (n<0){
		printf("负数\n");
	} else
	printf("零\n");
	return 0;
}