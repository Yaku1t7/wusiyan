#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
//--------************--------//
//int main(void)
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//---------************---------//
//void print(int n)
//{
//	printf("%d\n", n % 10);
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main(void)
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//123
//	print(num);
//	return 0;  //321123
//}
//---------************---------//
//void up_and_down(int n)
//{
//	printf("lv %d\n", n);// #1
//	if (n < 4)
//	{
//		up_and_down(n + 1);
//	}
//	printf("lv %d\n", n);// #2
//}
//
//int main(void)
//{
//	int n = 1;
//	up_and_down(n);
//	return 0;  //12344321
//}
//---------************---------//
//conclusion：(CprimerplusP221)

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main(void)
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}