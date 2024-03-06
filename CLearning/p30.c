#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);//-10
//	return 0;
//}

//int main(void)
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//无限循环，i不会是负数
//	}
//	return 0;
//}

//int main(void)
//{
//	char a[1000];//char存储的数字范围是-128~127
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//--->-1,-2,-3,...,-999,-1000
//	}
//	//-1~-1000的数会被截断到-128~127之间--->-1,-2,-3,...,-128,127,126,...,1,0--->合计255个数（strlen计算\0之前的个数）
//	printf("%d", strlen(a));//255
//	return 0;
//}

//unsigned char i;//unsigned char存储的数字范围是0~255
//int main(void)
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//无限循环
//	}
//	return 0;
//}