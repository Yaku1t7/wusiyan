#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void)
//{
//	int arry[6] = { 1,2,3,4,5,6};
//	printf("%lld\n", sizeof(arry));//--->24=6*4;%lld=long long int(8byte)
//	return 0;
//}

//int main(void)
//{
//	int a = 7;
//	int b = ~a;
//	printf("%d\n", b);//-8
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int c = 10;
//	int e = 10;
//	int b = a++;
//	int d = ++c;
//	int f = e--;
//	printf("a = %d, b = %d\n", a, b);//a=11,b=10
//	printf("c = %d, d = %d\n", c, d);//c=11,d=11
//	printf("e = %d, f = %d\n", e, f);//e=9,f=10
//	return 0;
//}

//int main(void)
//{
//	int a = 10; 
//	int b = 20;
//	int max = (a > b ? a^2 : b*3);
//	printf("max = %d\n", max);
//	return 0;
//}
//typedef unsigned int unit_32;
//int main(void)
//{
//	unsigned int num1 = 0;
//	unit_32 num2 = 0;
//	return 0;
//}

//void test(void);
//int main(void)
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}                    //2,3,4,5,6
//	return 0;
//}
//
//void test(void)
//{
//	static int a = 1; 
//	a++;
//	printf("a = %d\n", a)
//}

//int main(void)
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	char b = 'x';
//	char* q = &b;
//	printf("%p\n", q);
//	printf("%c\n", *q);
//	printf("%lld\n", sizeof(int*));
//	return 0;
//}