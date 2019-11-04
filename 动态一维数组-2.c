//# include <stdio.h>
//# include <malloc.h>
//
//int main(void)
//{
//	int* a;
//	a = (int*)malloc(10 * sizeof(int));   //用动态内存存储10个整数
//	int i = 0;
//	for (; i < 10; ++i)
//	{
//		*(a + i) = i + 1;
//	}
//	--i;
//	for (; i >= 0; --i)
//	{
//		printf("%d  ", *(a + i));
//	}
//	free(a);
//
//	return 0;
//}


//# include <stdio.h>
//# include <malloc.h>
//
//int main(void)
//{
//	int* a;
//	a = (int*)malloc(10 * sizeof(int));
//	int i = 0;
//	if (a == NULL)
//	{
//		printf("内存分配不成功：\n");
//	}
//	else
//	{
//		for (; i < 10; ++i)
//		{
//			*(a + i) = i + 1;
//		}
//	}
//	--i;
//	for (; i >= 0; --i)   //倒叙打印
//	{
//		printf("%d  ", *(a + i));
//	}
//	free(a);
//
//	return 0;
//}