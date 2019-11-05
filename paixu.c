////输入十个数，将这十个数按一定的顺序排列
//
//# include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int arr[10];
//	for (i = 0; i < 10; ++i)
//	{
//		scanf_s("%d", &j);       //输入这十个数，中间用空格隔开
//		arr[i] = j;              //将这十个数存放进数组中
//	}
//	int n, m;
//	for (n = 8; n >= 0; --n)                 //排序，将数值大的放右边
//	{
//		for (m = 0; m <= n; ++m)
//		{
//			if (arr[m] > arr[m + 1])
//			{
//				int temp;
//				temp = arr[m];
//				arr[m] = arr[m + 1];
//				arr[m + 1] = temp;
//			}
//		}
//	}
//	for (n = 0; n < 10; ++n)        //将这十个数字从小到大排列
//	{
//		if (n != 9)
//		{
//			printf("%d, ", arr[n]);
//		}
//		else
//		{
//			printf("%d\n", arr[n]);
//		}
//	}
//	for (n = 9; n >= 0; --n)        //将这十个数字从大到小排列
//	{
//		if (n != 0)
//		{
//			printf("%d, ", arr[n]);
//		}
//		else
//		{
//			printf("%d", arr[n]);
//		}
//	}
//	return 0;
//}