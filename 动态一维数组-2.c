//# include <stdio.h>
//# include <malloc.h>
//
//int main(void)
//{
//	int* a;
//	a = (int*)malloc(10 * sizeof(int));   //�ö�̬�ڴ�洢10������
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
//		printf("�ڴ���䲻�ɹ���\n");
//	}
//	else
//	{
//		for (; i < 10; ++i)
//		{
//			*(a + i) = i + 1;
//		}
//	}
//	--i;
//	for (; i >= 0; --i)   //�����ӡ
//	{
//		printf("%d  ", *(a + i));
//	}
//	free(a);
//
//	return 0;
//}