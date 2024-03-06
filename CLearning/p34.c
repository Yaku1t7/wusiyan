#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数指针

//int add34(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main(void)
//{
//	/*int a = 20;
//	int b = 30;
//	printf("%d\n", add34(a, b));*/
//	//&函数名 和 函数名都能表示函数的地址
//	//printf("%p\n", &add34);
//	//printf("%p\n", add34);
//	int (*pa)(int, int) = add34;//--->函数指针：pa是指针，指向两个传参为int、返回类型为int的函数add34
//	printf("%d\n", (*pa)(2, 3));//5
//	printf("%d\n", pa(2, 3));//5--->*pa和pa都一样
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main(void)
//{
//	void (*p)(char*) = Print;
//	(*p)("abdcef");//abcdef
//	return 0;
//}