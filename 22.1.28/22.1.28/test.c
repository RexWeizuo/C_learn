#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//}

int compare(int x,int y)
{
	int z = 0;
	if (x >= y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int larger_one = 0;
	scanf("%d %d", &num1, &num2);
	larger_one = compare(num1, num2);
	printf("larger one is %d\n", larger_one);
	
}