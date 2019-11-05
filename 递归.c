//# include <stdio.h>
//
//int f(int, int);
//
//int main(void)
//{
//	int n, k;
//	scanf_s("%d %d", &n, &k);
//	printf("%d", f(n, k));
//	return 0;
//}
//int f(int n, int k)
//{
//	if (k == 0 || k == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return f(n - 1, k) + f(n - 1, k - 1);
//	}
//}