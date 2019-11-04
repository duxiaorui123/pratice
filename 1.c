# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int* p;
	int len, i;
	scanf_s("%d", &len);        //len表示数组的长度
	p = (int*)malloc(len * 4);
	for (i = 0; i < len; ++i)
	{
		p[i] = i;
		printf("%d\t", p[i]);
	}
	return 0;
}