#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num = 0;
	srand(time(NULL));   //系统时间作为随机种子
	num = rand();     //rand()函数产生随机数
	printf("生成的随机数为 %d\n", num);
	system("pause");  
	return 0;
}
