#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main(void)
//{
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int* p = &a;
//	//printf("%p\n", p);
//	//printf("%d\n", *p);
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%p\n", pd);
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%lld\n", sizeof(pd));
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main(void)
//{
//	struct Book b1 = { "C Language", 55 };
//	struct Book* pb = &b1;
//	printf("%p\n", pb);
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	printf("The book name is：%s\n", b1.name);
//	printf("The book price is：%d yuan\n", b1.price);
//	b1.price = 15;
//	printf("The modified price is：%d yuan\n", b1.price);
//	strcpy(b1.name, "C++ Language");
//	printf("The modified name is：%s\n", b1.name);
//	return 0;
//}