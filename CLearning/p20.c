#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#pragma warning(disable:6384)//#30:sizeof(arr) / sizeof(arr[0])
#include<stdio.h>
//int main(void)
//{
//	short s = 0;
//	int a = 10;
//	printf("%lld\n", sizeof(s = a + 105));//2--->sizeof(short)=2
//	printf("%d\n", s);//0
//	printf("%d\n", s = a + 105);//115
//	return 0;
//}

//int main(void)
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a ^ (1 << 2);
//	printf("%d\n", a);//11
//	int b = (int)3.14;//cast
//	printf("%lld\n", sizeof(char*));//8
//	printf("%lld\n", sizeof(int*));//8  --->64 bit operating platform
//	return 0;
//}

//void test1(char arr[])//Array reception
//{
//	printf("%lld\n", sizeof(arr));//8
//	printf("%lld\n", sizeof(arr) / sizeof(arr[0]));//8
//}
//void test2(char* arr) //Pointer reception
//{
//	printf("%lld\n", sizeof(arr));//8
//}
//int main(void)
//{
//	char arr[10];
//	printf("%lld\n", sizeof(arr));//10
//	printf("%lld\n", sizeof(arr) / sizeof(arr[0]));//10
//	test1(arr);
//	test2(arr);
//	return 0;
//}

//int main(void)
//{
//	int i_1 = 0, i_2 = 0, a = 0, b = 2, c = 3, d = 4;
//	//i_1 = a++ && ++b && d++;//firstly a,and then ++,as long as the left side of && is Flase（a=0）, the right side will no longer perform operations
//	i_2 = a++ || ++b || d++;//--->abcd=1334 respectively
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1234
//	//if int a = 1,the result is 2335(i_1)
//	//if int a = 1,the result is 2234(i_2),as long as the left side of || is True（a=1）, the right side will no longer perform operations
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	max = (a > b ? a : b);//Conditional operator (ternary operator)
//	//it is equivalent to:
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	printf("max = %d\n", max);
//	return 0;
//}
//struct Stu//Create a structural variable --->struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main(void)
//{
//	int a = 10;
//	//Create an object(s1) using struct Stu,and initialize
//	struct Stu s1 = { "ZhangSan", 20, "2022158631" };
//	struct Stu* p = &s1;
//	printf("%s\n", (*p).name);
//	printf("%d\n", (*p).age);
//	printf("%s\n", (*p).id);
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->id);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}

//int main(void)
//{
//	char a = 3;
//	//int 3--->00000000000000000000000000000011,but sizeof(char)=1byte=8bit,so we have integer promotion
//	//a--->00000011(Cut the last eight digits)
//	char b = 127;
//	//int 127--->00000000000000000000000001111111
//	//b--->01111111(Cut the last eight digits)
//	// -----------integer promotion is according to symbol bits--------------
//	// a->00000000000000000000000000000011
//	// b->00000000000000000000000001111111
//	// c=a+b->00000000000000000000000010000010
//	char c = a + b;
//	//c--->10000010(Cut the last eight digits)
//	//printf type is int:c->11111111111111111111111110000010(complement)
//	//--->true form:10000000000000000000000001111110--->-126
//	printf("%d\n", c);//-126
//	return 0;
//}//summary:Cut the last eight digits,and integer promotion(according to symbol bits)
//int main(void)
//{
//	int a = 2;
//	int b = 3;
//	int c = 4;
//	int d = 5;
//	int e = 6;
//	int f = 7;
//	int g = a * b + c * d + e * f;//priority:L-R
//	printf("%d\n", g);
//	return 0;
//}
//int main(void)
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("%d\n", i);
//	return 0;
//}