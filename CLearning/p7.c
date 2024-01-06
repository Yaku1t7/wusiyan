#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//int main(void)
//{
//	int age = 50;
//	if (age < 18)
//	{	
//		printf("Minority\n");
//    }
//	//else if(18 <= age < 28)//If age=10--->18<=10-->False(0);(but python can do it)
//	else if(age>=18 && age<28)
//		printf("Youth\n");
//	else
//		printf("Middle aged and elderly\n");
//	return 0;
//}
//int main(void)
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//      else 
//          printf("haha\n");
//	return 0;
//}

//int main(void)
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");//haha
//	return 0;
//}

//int main(void)
//{
//	int num = 4;
//	if (num = 5)
//	{
//		printf("hehe\n");//num=5 is True in fact
//	}
//	return 0;
//}

//int main(void)
//{
//	int input = 0;
//	printf("Please enter： ");
//	scanf("%d", &input);
//	if (input % 2 == 1)
//		printf("haha\n");
//	else
//		printf("hehe\n");
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}

//int main(void)
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//switch(int type)
//	{
//	case 1:
//		printf("Monday");
//		break;
//	case 2:
//		printf("Tuesday");
//		break;
//	case 3:
//		printf("Wednesday");
//		break;
//	case 4:
//		printf("Thursday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Saturday");
//		break;
//	case 7:
//		printf("Sunday");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

//int main(void)
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//m=3
//	case 2:
//		n++;//n=2
//	case 3:
//		switch (n)//switch(2)
//		{
//		case 1:n++;//
//		case 2:
//			m++; //m=4
//			n++; //n=3
//			break;
//		default:
//			break;
//		}
//	case 4:
//		m++;//m=5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d\nn = %d\n", m, n);//m=5;n=3
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);//1 2 3 4
//		i++;
//	}
//	return 0;
//}
//getchar()
//int main(void)
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//input ctrl+z to stop;EOF=end of file
//	{
//		putchar(ch);
//	}
//	return 0;
//}