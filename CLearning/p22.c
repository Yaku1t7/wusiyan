#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//int main(void)
//{
//	//未初始化的指针变量
//	int* p;
//	*p = 20;//局部变量不初始化，里面默认放的是一个随机值
//	return 0;
//}

//int main(void)
//{
//	int a[10] = { 0 };
//	int i;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p++ = i;//数组越界导致的野指针问题
//	}
//	return 0;
//}

//int* test22()
//{
//	int a = 10;
//	return &a;//返回临时值&a的时候已被销毁
//}
//int main(void)
//{
//	int* p = test22();
//	//int* p = NULL;//用来初始化指针，给指针赋值空，避免野指针
//	printf("%d\n", *p);
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	pa = NULL;
//	//*pa = 0;//pa已是空地址（NULL），再赋值为0会报错
//	return 0;
//}

//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 0 };
//	printf("%lld\n", &arr[9] - &arr[0]);//--->9（中间元素的个数）指针减去指针
//	printf("%lld\n", &arr[9] - &ch[0]);//erro，不同类型指针相减
//	return 0;
//}

//int my_strlen(char* str)//首元素地址
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//指针减去指针
//}
//int main(void)
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);//20
//	printf("%d\n", a);//20
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	printf("%lld\n", sizeof(arr));//24=8*3
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}