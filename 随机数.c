#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num = 0;
	srand(time(NULL));   //ϵͳʱ����Ϊ�������
	num = rand();     //rand()�������������
	printf("���ɵ������Ϊ %d\n", num);
	system("pause");  
	return 0;
}
