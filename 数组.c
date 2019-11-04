//# include <stdio.h>
//
//int main(void)
//{
//	int a[4][5];
//	int i, j;
//	int n = 1;
//	for (i = 0; i < 4; ++i)
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			a[i][j] = n;
//			++n;
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	int t;
//	int max;
//	max = a[0][0];
//	for (i = 0; i < 4; ++i)
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//			}
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}