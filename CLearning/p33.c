#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int arr[10] = {1,2,3,4,5,6,7,8,9,10}
//int (*p)[10] = &arr //数组指针p，把整个数组arr的地址赋值给数组指针p，([]的优先级高于*)，一般很少这样写代码
//区分
//int *p1[10]--->p1是指针数组
//int (*p2)[10]--->p2是数组指针

//int main(void)
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//指针pa指向一个内含有5个char*类型的数组
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;//指针pa2指向一个内含有10个int类型的数组
//	return 0;
//}

//使用例子(一维数组中，不好用)
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);//*p解引用=arr首元素地址,*p[i]读取数组中的每个元素
//	}
//	printf("\n");
//	//或
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));//*p解引用=arr首元素地址
//	}
//	printf("\n");
//	//不如
//	int* pa = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pa[i]);
//		//或
//		//printf("%d ", *(pa + i));
//	}
//	return 0;
//}

//void print1(int arr[][5], int x, int y)//声明一个指向N维数组的指针时，只能省略最左边括号中的值
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//void print2(int(*p)[5], int x, int y)//将二维数组中的每一行看成是一维数组。指针p存放每一行5个元素的地址记为一个新的数组col
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));//p+i:每一行地址--->*(p + i)解引用得到该行的数组名col--->*(*(p + i) + j)解引用得到该行（数组col）的每一个元素
//			//或
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//区分
//int arr[5];//arr是一个 有5个元素的整型数组
//int* parr1[10];//parr1是一个 有10个int*类型元素的指针数组
//int (*parr2)[10];//parr2是一个 有10个int类型元素的数组指针
//int (*parr3[10])[5];//parr3是一个 有10个指针类型的元素 的数组，每一个数组中的指针指向的数组有5个int类型的元素