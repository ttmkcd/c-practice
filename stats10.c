#include <stdio.h>

int main()
{
	int i;
	int n;
	int max, sum, min;
	scanf("%d", &n);
	sum = max = min = n;
	for (i=2; i<11; i++){
		scanf("%d", &n);
		sum += n;
		if (n > max ) max = n;
		if (n < min ) min = n;
	}
	printf("avg=%d\n", sum / 10);
	printf("max=%d\n", max);
	printf("min=%d\n", min);
	return 0;
}