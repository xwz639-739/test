#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//const int MIN_PRE_H = 60;
//int main()
//{
//	printf("please enter the mins(-1 to quit): ");
//	float mins = 0.0;
//	while (scanf("%f", &mins) && mins >= 0.0)
//	{
//		printf("\n%.2f mins is %.2f hours\n", mins, mins / MIN_PRE_H);
//		printf("please enter the mins(-1 to quit): ");
//	}
//	return 0;
//}
//5.11----1

//int main()
//{
//	int a;
//	printf("please enter a value:");
//	scanf("%d", &a);
//	for (int i = 0; i <= 10; i++)
//	{
//		printf("%d ", a + i);
//	}
// return 0;
//}
//5.11----2

//int main()
//{
//	int days;
//	printf("please enter the days(0 to quit):");
//	while (scanf("%d", &days) && days != 0)
//	{
//		printf("%d days are %d week(s) and %d day(s)\n", days, days / 7, days % 7);
//		printf("please enter the days(0 to quit):");
//	}
//	return 0;
//}
//5.11----3

//int main()
//{
//	float high;
//	printf("Enter a height in centimeters(<=0 to quit): ");
//	while (scanf("%f", &high) && high > 0)
//	{
//		float feet;
//		float inches;
//		feet = high / 30.48;
//		inches = ((int)high -(int)feet & 30) / 2.54;
//		printf("%.2f cm =%.2f feet, %.2f inches\n", high, feet ,inches );
//		printf("Enter a height in centimeters(<=0 to quit): ");
//	}
//	return 0;
//}
//5.11----4

//int main()
//{
//	int count, sum=0, n;
//	printf("enter the value:");
//	scanf("%d", &n);
//	for (count = 1; count <= n; count++)
//	{
//		sum += count;
//	}
//	printf("sum=%d", sum);
//}
//5.11----5

//int main()
//{
//	int count, sum=0, n;
// 	printf("enter the value:");
// 	scanf("%d", &n);
// 	for (count = 1; count <= n; count++)
// 	{
// 		sum += count*count;
// 	}
// 	printf("sum=%d", sum);
//}
//5.11----6

//double LIFANG(double a)
//{
//	return a * a * a;
//}
//int main()
//{
//	double a,result;
//	printf("please enter a value:");
//	scanf("%lf", &a);
//	result=LIFANG(a);
//	printf("result=%.2lf", result);
//	return 0;
//}
//5.11----7

//int main()
//{
//	printf("This program computes moduli.\n");
//	int a,b;
//	printf("Enter an integer to serve as the second operand: ");
//	scanf("%d", &b);
//	printf("Now enter the first operand: ");
//	scanf("%d", &a);
//	printf("%d %% %d is %d\n", a, b, a % b);
//	printf("Enter next number for first operand (<=0 to quit):");
//	while (scanf("%d", &a) && a > 0)
//	{
//		printf("%d %% %d is %d\n", a, b, a % b);
//		printf("Enter next number for first operand (<=0 to quit):");
//	}
//	printf("Done");
//	return 0;
//}
//5.11----8

//void Temperatuers(float a)
//{
//	printf("%.2lf\n", a);
//	double b = 5.0 / 9.0 * (a - 32.0);
//	printf("%.2lf\n", b);
//	printf("%.2lf\n", b + 273.16);
//}
//int main()
//{
//	printf("please enter the temperatures(q to quit): \n");
//	double temp;
//	while (scanf("%lf", &temp) == 1)
//	{
//		Temperatuers(temp);
//		printf("please enter the temperatures(q to quit): \n");
//	}
//	return 0;
//}
//5.11----9