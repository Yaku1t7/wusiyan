#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//10 elements require 9 rounds of bubbling
//9 8 7 6 5 4 3 2 1 0
//-->8 9 7 6 5 4 3 2 1 0
//-->8 7 9 6 5 1 3 2 1 0 
//-->... ...
//-->0 1 2 3 4 5 6 7 8 9
//void bubble_sort(int arr[], int sz)
//{
//	//Determine the number of bubbling rounds
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//every round of bubbling
//		int j;
//		int flag = 1;//Assuming that some elements are ordered
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//But in fact, it's not orderly
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main(void)
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 8,5,6,7,1,2,9,3,4,0 };//It can also be an unordered array
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	//Sort arr in ascending order
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);//000000187010F608 #1
//	printf("%p\n", &arr[0]);//000000187010F608 #2--->#1#2 results are the same,both are the first element's address
//	printf("%d\n", *arr);//1--->the first element 
//	//array name is the first element's address,but it has 2 exception:
//	//exception1:sizeof(array name)--->The array name represents the entire array；it calculate the size of the entire array,the unit is byte
//	//exception2：&array name--->The array name represents the entire array；what '&array name' retrieved is the address of the entire array
//	printf("%p\n", &arr);//000000187010F608--->is same as #1 and #2,but the meaning is diffrient
//	printf("%p\n", arr + 1);//000000187010F60C---> the second element's address
//	//printf("%p\n", &arr[0] + 1);//000000187010F60C---> the second element's address
//	//printf("%p\n", &arr + 1);//000000187010F62C--->from &arr to &arr+1，from 08 to 2C，added 36  
//	return 0;
//}