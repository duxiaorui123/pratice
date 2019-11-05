//# include <stdio.h>
//
//int main(void)
//{
//	int i = 100;
//	int* p;
//	int** q;
//	p = &i;
//	q = &p;
//	printf("%d %d", *p, **q);
//	return 0;
//}




//# include <stdio.h>
//int f(int*, int);
//int main(void)
//{
//	int arr[101];
//	int i, sum;
//	for (i = 0; i < 101; ++i)
//	{
//		arr[i] = i;
//	}
//	sum = f(arr, 101);
//	printf("%d", sum);
//
//	return 0;
//}
//
//int f(int* p, int size)
//{
//	int sum, j;
//	sum = 0;
//	for (j = 0; j < size; ++j)
//	{
//		sum += p[j];
//	}
//	return sum;
//}