#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//int main()
//{
//	int num = 4;
//	printf("%d\n", num);//4
//	num = 8;
//	printf("%d\n", num);//8
//	return 0;
//}

//int main()
//{
//	const int num = 4;
//	printf("%d\n", num);//4
//	num = 8;//erro
//	printf("%d\n", num);//erro
//	return 0;
//}

//int main()
//{
//	const int n = 4;
//	int arr[n] = {0};
//	return 0;
//}

//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//enum Sex
//{
//	//female,
//	//male,
//	//secret
//	female = 1,
//	male,
//	secret
//};
//int main()
//{
//	enum Sex s = male;
//	s = female;
//	//male = 1;//erro
//	printf("%d\n", s);//1(female)
//	return 0;
//}

//int main()
//{
	//char arr1[] = "abc";
	//printf("%s\n", arr1);//abc
	//printf("%d\n", strlen(arr1));//3
	//char arr2[] = { 'a', 'b', 'c', '\0'};
	//printf("%s\n", arr2);//abc
	//printf("%d\n", strlen(arr2));//3
	//char s[] = "abcfg";
	//printf("%s\n", s);

	//char s = 'acb';
	//printf("%d\n", s);//98(b--ASCII)
	//char s = 'abc';
	//printf("%d\n", s);//99(c--ASCII)
	//char s = 'abd';
	//printf("%d\n", s);//100(d--ASCII)
	//char s = 'abdg';
	//printf("%c\n", s);//g,only the last one
	//return 0;
//}
//int main()
//{
//	printf("ok??\\?");
//	return 0;
//}

//int main(void)
//{
//	//printf("%d\n", strlen("C:\test\32\test.c"));//13
//	return 0;
//}

//int main(void)
//{
//	int input = 0;
//	printf("Please select：<0 or 1> ");
//	scanf("%d", &input);
//	if (input == 1)
//	    printf("good\n");
//	else
//		printf("bad\n");
//	return 0;
//}

//int main(void)
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("days: %d\n", line);
//		line++;
//	}
//	printf("good offer");
//	return 0;
//}
//int add(num1, num2);
//int main(void)
//{
//	int a, b, c;
//	printf("Please enter:\n");
//	scanf("%d%d", &a,&b);
//	c = add(a, b);
//	printf("The result is：%d\n", c);
//	return 0;
//}
//int add(num1, num2)
//{
//	int sum;
//	sum = num1 + num2;
//	return sum;
//}

//int main(void)
//{
//	int arry[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arry[i]);
//		i++;
//	}
//	return 0;
//}