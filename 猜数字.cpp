#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu() 
{
	printf("**********************\n");
	printf("**  y:��ʼ  n:����  **\n");
	printf("**********************\n");
}

void game()
{
	int guess, i;
	printf("��ʼ��\n");
	guess = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &i);
		if (i > guess)
		{
			printf("�´��ˣ�\n");
		}
		else if (i < guess)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
	printf("����Ҫ��������\n");
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
			printf("����");
			sz = 0;
		}
		else
		{
			printf("���벻�Ϸ�,����������\n");
			sc = 0;
		}
	}
	return 0;
}

