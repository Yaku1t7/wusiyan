#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针进阶
//void test32(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	test32(arr);
//	return 0;
//}

//int main(void)
//{
//	char ch = 'w';
//	char* pc = &ch;//字符指针存放字符的地址
//	return 0;
//}

//int main(void)
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%c\n", *pc);//a,指针pc存放的是首元素地址
//	printf("%s\n", arr);//abcdef,arr是首元素地址,&arr数组的地址
//	printf("%s\n", pc);//abcdef,%s--->传入字符串指针就可以打印对应的字符串
//	return 0;
//}

//int main(void)
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串，指针p存放的是首元素a的地址
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef
//	return 0;
//}

//int main(void)
//{
//	char* p = "abcdef";//字符串常量
//	*p = 'w';//erro,字符常量可以赋值给字符变量，如"char b='a';",
//  //但不能把一个字符串常量赋给一个字符变量，同时也不能对字符串常量赋值！
//	printf("%s\n", p);
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//字符串常量：用双引号(“”)括起来的0个或者多个字符组成的序列，
//	//每个字符串尾自动加一个 ‘\0’ 作为字符串结束标志,不可更改，加上const全局常量
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//haha，用相同的字符串常量去初始化
//		//不同的数组的时候就会开辟出不同的内存块
//	}
//	//------------------------------------------------------
//	if (p1 == p2)
//	{
//		printf("hehe\n");//hehe,指针指向同一个字符串的时候，他们实际会指向同一块内存
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//
//}

//指针数组
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));//parr[i]首元素的地址
//		}
//		printf("\n");
//	}
//	return 0;
//}