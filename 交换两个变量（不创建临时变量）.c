#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a=0 , b=0 ;
//	scanf("%d,%d", &a,&b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}

int main()
{
	int a = 9;
	int b = 6;
	
	printf("a=%d b=%d\n", a, b);

	a = a ^ b;//a = 3^5
	b = a ^ b;//b=3
	a = a ^ b;//a= 3^5^3

	printf("a=%d b=%d\n", a, b);
	return 0;
}
