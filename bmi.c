#include <stdio.h>

int main()
{
	double a;
	double b;
	scanf ("%lf %lf", &a,&b);
	double BMI = b/(a*a);
	if (BMI<18.5){
		printf("pianshou");
	} else if (BMI<24){
		printf("zhengchang");
	} else if (BMI<28){
		printf("chaozhong");
	} else if (BMI>=28){
		printf("feipang");
	}
	return 0;
}

