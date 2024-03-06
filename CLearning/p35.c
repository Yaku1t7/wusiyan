#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//(*(void(*)())0)();
//void(*)()//--->函数指针，指向无参返回类型为空void的函数，记为q函数
//( void(*)() )0//--->把0强制转换成上述类型（函数的地址）
//*( void(*)() )0()//--->解引用成为q函数,然后调用该函数

//void(*   signal(int, void(*)(int))   )(int)
//signal函数有两个参数，一个是int，另一个是函数指针，该函数指针指向传参为int返回值为空的函数
//signal函数的返回类型是一个函数指针，该函数指针指向传参为int返回值为空的函数

//int Add35(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main(void)
//{
//	//需要一个数组存放4个函数的地址--->函数指针数组
//	int (*parr[4])(int, int) = { Add35, Sub, Mul, Div };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}