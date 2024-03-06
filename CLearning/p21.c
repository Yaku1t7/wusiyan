#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;//-->00000000
//	//char* pc = &a;
//	//*pc = 0;//only change the last one-->11223300
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//0000004297CFFBF4
//	printf("%p\n", pa + 1);//0000004297CFFBF8
//	printf("%p\n", pc);//0000004297CFFBF4
//	printf("%p\n", pc + 1);//0000004297CFFBF5
//	return 0;
//}
//int* p;p + 1 --->+4 byte
//char* p;p + 1 --->+1 byte

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		int z = p[i] = 1;//Replace all 0 with 1
//		printf("%d ", z);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		p++;//Out of range--->wild pointer，野指针
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//Free space pointed by pointer--->wild pointer
//	return 0;
//}