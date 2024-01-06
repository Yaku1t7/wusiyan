﻿#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("****1.play  2.exit****\n");
	printf("**********************\n");
}
void game()
{
	char board[ROW][COL];
	char ret;
	//Initialize chessboard(3x3)
	/*   |   |
	  ---|---|---
		 |   |
	  ---|---|---
		 |   |   */
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);//player win-->*;computer win-->#;draw-->D;contiue-->C
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("Player Win!\n");
	}
	else if (ret == '#')
	{
		printf("Computer Win!\n");
	}
	else
	{
		printf("Draw!\n");
	}
}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Please select：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("***Game Start***\n");
			game();
			break;
		case 2:
			printf("***Exit game***\n");
			break;
		default:
			printf("Selection error，please reselect！\n");
			break;
		}
	} while (input != 2);//control statement while(input),when input=0--->stop
	//so only when while(True)--->execute
}
//int main(void)
//{
//	test();
//	return 0;
//}

//supplement：
//int main(void)
//{
//	int a;
//	char b;
//	scanf("%d %c", &a, &b);//%dspace%c,the speace will swallow all white space characters（space \n tab),input 1spaceg，print ---> a=1，b=g
//	printf("a = %d\n", a);
//	printf("b = %c\n", b);
//	return 0;
//}