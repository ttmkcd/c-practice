#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	x = 13425;
	do {
		int d = x%10;
		printf("%d ", d);
		if (x>=10){
			printf(" ");
		}
		x /= 10;
	} while ( x>0 );
	printf("\n");
	
	return 0;
}