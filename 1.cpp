#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu() 
{
	printf("**********************\n");
	printf("**  y:开始  n:结束  **\n");
	printf("**********************\n");
}

void game()
{
	int guess, i;
	printf("开始吧\n");
	guess = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &i);
		if (i > guess)
		{
			printf("猜大了！\n");
		}
		else if (i < guess)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
	printf("您还要继续猜吗？\n");
}

int main() 
{
	srand((unsigned int)time(NULL));
	int sc = 0;
	int sz = 1;
	while (sz) 
	{
		menu();
		scanf("%s", &sc);
		if (sc == 'y')
		{
			game();
		}
		else if (sc == 'n')
		{
			printf("结束");
			sz = 0;
		}
		else
		{
			printf("输入不合法,请重新输入\n");
			sc = 0;
		}
	}
	return 0;
}

