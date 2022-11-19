#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<float.h>
//int main()
//{
//	char fname[40] ;
//	char sname[40] ;
//	printf("please enter yout first name and last name\n");
//	scanf("%s %s", fname, sname);
//	printf("hello,%s %s", fname, sname);
//	return 0;
//}
//4.8----1

//int main()
//{
//	char name[40];
//	int length;
//	printf("please enter your name\n");
//    scanf_s("%s", &name,40);
//	length=printf("\"%s\"\n", name);
//	length -= 4;
//	printf("\"%20s\"\n", name);
//	printf("\"%-20s\"\n", name);
//	printf("\"%*s\".",(length+3),name);
//	return 0;
//}
//4.8----2

//int main()
//{
//	double input;
//	scanf("%lf", &input);
//	printf("The input is %.1lf or %.1e", input,input);
//	return 0;
//}
//4.8----3

//int main()
//{
//	char name[40];
//	float higt;
//	printf("please enter your name and higt(cm)\n");
//	scanf("%s", &name);
//	scanf("%f", &higt);
//	printf("%s,you are %.2fm tall.", name, higt/100);
//	return 0;
//}
//4.8----4

//#define Mb 1.00
//#define MB 8.00
//int main()
//{
//	float a,b;
//	printf("please enter the speed of download(Mb/s) and the file's contain\n");
//	scanf("%f %f", &a,&b);
//	printf("At %.2f megabits per second,a file of %.2f megasbytes downloads in %.2f seconds.\n", Mb * a, MB * b, (MB * b) / (Mb * a ));
//	return 0;
//}
//4.8----5

//int main()
//{
//	printf("please enter your first name \n");
//	char first_name[20] = { 0 };
//	char last_name[20] = { 0 };
//	int length1, length2;
//	scanf("%s", first_name);
//	printf("please enter your last name\n");
//	scanf("%s", last_name);
//	length1 = printf("%s", first_name);
//	printf(" ");
//	length2 = printf("%s", last_name);
//	printf("\n%*d %*d\n", length1, length1, length2, length2);
//	printf("%s", first_name);
//	printf(" ");
//	printf("%s", last_name);
//	printf("\n%-*d %-*d", length1, length1, length2, length2);
//	return 0;
//}
//4.8----6

//int main()
//{
//	double a = 1.0 / 3.0;
//	float b = 1.0 / 3.0;
//	printf("float of one third(6):%0.6f\n", b);
//	printf("float of one third(12):%0.12f\n", b);
//	printf("float of one third(16):%0.16f\n", b);
//	printf("double of one third(6):%0.6lf\n", a);
//	printf("double of one third(12):%0.12lf\n", a);
//	printf("double of one third(16):%0.16lf\n", a);
//	printf("FLT_DIG in float.h is %d\n", FLT_DIG);
//	printf("DBL_DIG in float.h is %d\n", DBL_DIG);
//	return 0;
//}
//4.8----7

//#define JL 3.785
//#define YL 1.609
//
//int main()
//{
//	printf("please enter the range you traveled(in mile):");
//	float range, oil;
//	scanf("%f", &range);
//	printf("please enter the oil you spend(in gallon):");
//	scanf("%f", &oil);
//	printf("In USA, your oil wear is %.1f M/G\n", range / oil);
//	printf("In Europe, your oil wear is %.1fL/100KM", (oil * JL * 100) / (range * YL));
//	return 0;
//}
//4.8----8