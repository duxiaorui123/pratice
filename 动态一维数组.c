//# include <stdio.h>
//# include <malloc.h>
//
//int main(void)
//{
//	int i;
//	int length;
//	printf("��������ĳ��ȣ�");
//	scanf_s("%d", &length);
//	int* p;
//	p = (int*)malloc(4 * length);
//	if (p == NULL)
//	{
//		printf("�ڴ���䲻�ɹ���\n");
//	}
//
//	for (i = 0; i < length; ++i)
//	{
//		scanf_s("%d", &p[i]);
//	}
//	printf("һά����������ǣ�\n");
//	for (i = 0; i < length; ++i)
//		printf("%d\n", p[i]);
//
//	return 0;
//}