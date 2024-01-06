#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//int Fac(int n)
//{
//	int i;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main(void)
//{
//	int n;
//	printf("Please enter：\n");
//	scanf("%d", &n);
//	int ret;
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int Fac1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac1(n - 1);
//	}
//}
//int main(void)
//{
//	int n;
//  int ret;
//	printf("Please enter：\n");
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main(void)
//{
//	
//	int n;
//	int ret;
//	printf("Please enter：\n");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}
//int Fib1(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main(void)
//{
//	//Fibonacci sequence 1 1 2 3 5 8 13 21 34......
//	//                   a b c
//	int n;
//	int ret;
//	printf("Please enter：\n");
//	scanf("%d", &n);
//	ret = Fib1(n);
//	printf("%d\n", ret);
//	return 0;
//}