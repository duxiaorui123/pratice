//# include <stdio.h>
//
//int main(void)
//{
//	int i, j, n;
//	int x[5];
//
//	scanf_s("%d", &n);
//
//	for (i = 0; n != 0; ++i)
//	{
//		x[i] = n % 10;
//		n /= 10;
//	}
//	printf("%d\n", i);
//	for (j = i - 1; j >= 0; --j)
//	{
//		printf("%d ", x[j]);
//	}
//	printf("\n");
//	for (j = 0; j < i; ++j)
//	{
//		printf("%d", x[j]);
//	}
//	printf("\n");
//
//	return 0;
//}