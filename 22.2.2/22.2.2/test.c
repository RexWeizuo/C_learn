#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//
//	scanf("%d%d%d", &a, &b, &c);
//	
//
//	if (b > a) 
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (c > a)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (c > b)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a,b,c);
//
//}

#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play     **********\n");
	printf("*********** 0.exit     **********\n");
	printf("**********************************\n");
}
//RAND_MAX--rand函数能返回随机数的最大值。
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//打印3的倍数（1-100之间）
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//求两个数最大公约数
int main()
{
	int a = 0;//a<b
	int b = 0;
	int c = 0;

	scanf("%d%d", &a, &b);

	if (a < b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	while (a % c!=0|| b % c!=0)
	{
		c--;
	}
	printf("最大公约数是：%d\n", c);
}
