//# include <stdio.h>
//# include <malloc.h>
//
//int main(void)
//{
//	int i;
//	int length;
//	printf("输入数组的长度：");
//	scanf_s("%d", &length);
//	int* p;
//	p = (int*)malloc(4 * length);
//	if (p == NULL)
//	{
//		printf("内存分配不成功！\n");
//	}
//
//	for (i = 0; i < length; ++i)
//	{
//		scanf_s("%d", &p[i]);
//	}
//	printf("一维数组的内容是：\n");
//	for (i = 0; i < length; ++i)
//		printf("%d\n", p[i]);
//
//	return 0;
//}