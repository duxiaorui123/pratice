////����ʮ����������ʮ������һ����˳������
//
//# include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int arr[10];
//	for (i = 0; i < 10; ++i)
//	{
//		scanf_s("%d", &j);       //������ʮ�������м��ÿո����
//		arr[i] = j;              //����ʮ������Ž�������
//	}
//	int n, m;
//	for (n = 8; n >= 0; --n)                 //���򣬽���ֵ��ķ��ұ�
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
//	for (n = 0; n < 10; ++n)        //����ʮ�����ִ�С��������
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
//	for (n = 9; n >= 0; --n)        //����ʮ�����ִӴ�С����
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