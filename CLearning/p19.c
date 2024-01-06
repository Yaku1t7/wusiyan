#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//int main(void)
//{
//	int a = 16;
//	//>>Right shift symbol,can only operate on int type，by complement operation
//	int b = a >> 1;//16--->00000000 00000000 00000000 00010000
//	printf("%d\n", b);//8--->0(sign bit 0+1-) 0000000 00000000 00000000 0001000

//	int c = -2;
//	//<<Left shift symbol
//	int d = c << 2;
//	printf("%d\n", d);//-8
//	return 0;
//}

//int main(void)
//{
//	int a = -3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);//5
//	int d = a | b;
//	printf("%d\n", d);//-3
//	int e = a ^ b;
//	printf("%d\n", e);//-8
//	return 0;
//}

//exchange a and b 

//int main(void)//---->method 1
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}
//int main(void)//---->method 2
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//int main(void)
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	num = num / 2;
//	//}//erro,when num is -1,the result is 0
//	int i;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("The number of 1 in binary(in complement) is %d\n", count);
//	return 0;
//}

//int main(void)
//{
//	int a = 0;
//	if (!a) //means:if a is False,execute program
//	{
//		printf("haha\n");
//	}
//	return 0;
//}