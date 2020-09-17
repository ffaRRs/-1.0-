#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


main() {

	int n = 0;
	int i, i1 = 0, i2 = 1, sum = 1;
	printf("n=");
	scanf("%d", &n);
	for (int m = 0; m < n - 1; m++)
	{
		i = i1 + i2;
		i1 = i2;
		i2 = i;
		sum += i;
	}
	printf("%d", sum);
	return 0;
}