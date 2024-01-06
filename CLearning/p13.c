#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
//int main(void)
//{
//	int arr1[10] = {1,2,3};
//	char arr2[5] = {'a', 98};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%lld\n", sizeof(arr4));//7
//	//sizeof:calculate the size occupied-char 7*1=7
//	printf("%lld\n", strlen(arr4));//6
//	//strlen:calculate string length，before '\0' 
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	char arr3[3] = { 'a', 'b', 'c' };/
//	char arr4[4] = { 'a', 'b', 'c' };use strlen must write'\0'
//	char arr5[4] = "abc";
//	//arr2???arr4
//	//arr1???arr5
//	printf("%lld\n", sizeof(arr1));//4
//	printf("%lld\n", sizeof(arr2));//4
//	printf("%lld\n", strlen(arr1));//3
//	printf("%lld\n", strlen(arr2));//3
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "abcdef";
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i, j;
//	int sz1 = strlen(arr1);//6
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);//10
//	for (i = 0, j = -5; i < sz1 || j < sz2; j++)
//	{
//		if (i != sz1)
//		{
//			printf("STR：%c\n", arr1[i]);
//			i++;
//		}
//		if (i == 6)
//		{
//			printf("ARR：%d\n", arr2[j]);
//		}
//	}
//	return 0;
//}

//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = &%d: %p\n", i, i+1,&arr[i]);
//	}
//	return 0;
//}
//int main(void)
//{
//	char arr1[] = { '1', '2', '3'};//not right
//	char arr2[] = { '1', '2', '3','\0'};
//	char arr3[7] = { '1', '2', '3','\0'};//'1', '2', '3', '\0', '\0', '\0', '\0'
//	char arr4[5] = { '1', '2', '3'};//'1', '2', '3', '\0', '\0'
//	char arr5[4] = { '1', '2', '3'};//'1', '2', '3', '\0'
//	char arr6[6] = "123";//--->1', '2', '3', '\0', '\0', '\0'
//	char arr7[] = "123";
//	int arr8[10] = { 1,2,3 };//1230000000
//	//printf("%lld\n", strlen(arr1));//42(random value)
//	printf("%lld\n", strlen(arr7));//3
//	printf("%lld\n", sizeof(arr1));//3
//	printf("%lld\n", sizeof(arr2));//4
//	printf("%lld\n", sizeof(arr3));//7
//	printf("%lld\n", sizeof(arr6));//6
//	printf("%lld\n", sizeof(arr8));//12byte=3*4byte
//	return 0;
//}
//--------****two-dimensional***--------
//int main(void)
//{
//	//int arr[3][4];
//	//int int int int
//	//int int int int
//	//int int int int
//	//int int int int
//	int arr1[3][4] = { 1,2,3,4,5 };
//	//1 2 3 4 
//	//5 0 0 0
//	//0 0 0 0
//	int arr2[3][4] = { {1,2,3},{4,5} };
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	//int arr3[][] = { 1,2,3,4,5 };//erro
//	//int arr4[3][] = { 1,2,3,4,5 };//erro ---->without col value
//	int arr5[][4] = { {1,2,3,4},{5,6,7,8} };//---->without row value 
//	//1 2 3 4
//	//5 6 7 8
//	return 0;
//}
//int main(void)
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//}

//int main(void)
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i,j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = : %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}