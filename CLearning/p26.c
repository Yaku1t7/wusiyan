#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体-描述一个学生
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1,s2,s3是三个全局的结构体（变量）
//
////另一种表示方法
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//把struct Stu重新起名叫做Stu（类型）
//
//int main(void)
//{
//	struct Stu s1 = {"XiaoMing", 20, "15612357845", "man"};//创建结构体变量，局部变量
//	Stu s2;
//	return 0;
//}

//嵌套结构体
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main(void)
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", {100, 'w', "hello world", 3.14}, arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%p\n", t.pc);//00000037E84FF708
//	printf("%lf\n", t.s.d);//3.140000
//	return 0;
//}

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tel:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tel:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//int main(void)
//{
//	Stu s = { "XiaoMing", 20, "15612357845", "man" };
//	//打印结构体数据
//	Print1(s);
//	Print2(&s);//使用这个函数更好，结构体传参的时候要传结构体的地址
//	return 0;
//}