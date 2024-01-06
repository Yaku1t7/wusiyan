#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
//int Add(x, y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main(void)
//{
//	int a = 2;
//	int b = 4;
//	int sum = Add(a, b);
//	printf("the result is %d\n", sum);
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "bit";
//	char arr2[20] = "######";
//	strcpy(arr2, arr1);//copy arr1 to arr2
//	//in fact is bit\0##,but only print the characters before "\0"
//	printf("%s\n", arr2);//bit
//	return 0;
//}

//int main(void)
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);//***** world
//	return 0;
//}

//int get_max(x, y)
//{
//	if (x > y)
//	{
//		printf("a is more than b\n");
//		return x;
//	}
//	else
//	{
//		printf("a is less than b\n");
//		return y;
//	}
//}
//int main(void)
//{
//	int a = 11;
//	int b = 12;
//	int max = get_max(a, b);
//	printf("The max is：%d\n", max);
//	return 0;
//}

//#include<math.h>//fabs()--->Take absolute value
//#define EPS 1e-7 
//int main(void)
//{
//	double a;
//	double b;
//	printf("Please enter a and b(float):");
//	scanf("%f%f", &a, &b);
//	if (fabs(a - b) <= EPS)
//	{
//		printf("a and b are equality approximately\n");
//	}
//	else
//	{
//		printf("a and b are not equal\n");
//	}
//	return 0;
//}
//void swap1(x, y)
//{
//	int tmp;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a = %d, b = %d\n", a, b);
//	swap1(a, b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("a = %d\n", a);//20
//	return 0;
//}

//void swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n", a, b);//a=10,b=20 
//	swap2(&a, &b);
//	printf("a = %d, b = %d\n", a, b);//a=20,b=10
//	return 0;
//}

//#include<math.h>
//int is_prime(n)
//{
//	int j;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//		/*else
//			return 1;*///erro
//	}
//	return 1;
//}
//int main(void)
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//      {
//			printf("%d\n", i);
//      }
//	}
//	return 0;
//}

//int is_leap_year(y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main(void)
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d is leap year!\n", year);
//		}
//
//	}
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//} 
//int main(void)
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("can not find!\n");
//	}
//	else
//	{
//		printf("find! The subscript is: %d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//int main(void)
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

//int main(void)
//{
//	int len;
//	char arr[20] = "hello";
//	len = strlen("abc");
//	printf("%d\n", len);//3
//	printf("%lld\n", strlen("abc"));//3
//	printf("%lld\n", strlen(strcat(arr, "bit")));//"hellobit"--->8
//	strcat(arr, "bit");
//	printf("%s\n", arr);//hellobitbit
//	return 0;
//}

//int main(void)
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}
//The "printf" function returns the length of printed characters,printf("%d", 43) returns 2
#include "Add.h"
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}