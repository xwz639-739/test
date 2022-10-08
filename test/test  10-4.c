#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
void jiemian1()
{
	printf("****************\n");
	printf("****欢迎使用****\n");
	printf("****************\n");
	printf("##登录####注册##\n");
	printf("    1        2  \n");
}
void jiemian2()
{
	printf("##退出##修改密码##\n");
	printf("##  1 ##    2   ##\n");
}

int main()
{
	char acc1[20] = { 0 };
	char acc2[20] = { 0 };
	char password1[20] ;
	char password2[20] = { 0 };
	char password3[20] = { 0 };
	const char arr[20]={0};
	int a = 0;
	int b = 0;
	int i = 0,n=0;
	jiemian1();
	scanf("%d", &a);
	if (1 == a)
	{
		for (n = 1; n <= 3; n++)
		{
			printf("请输入用户名、密码\n");
			printf("用户名：");
			scanf("%s", &acc1);
			printf("密码：");
			scanf("%s", &password2);
			if (strcmp(acc1, acc2) == 0 && strcmp(password2, password1) == 0)
			{
				printf("登录成功");
				break;
			}

			else
			{
				printf("登录失败，请重新登录");
			}
		}
	}
	if (2 == a)
	{
		printf("请输入用户名：");
		scanf("%s", acc2);
		printf("请输入密码：");
		scanf("%s", password1);
		printf("注册成功，已登录\n");
		system("cls");
	}
	jiemian2();
	scanf("%d",&b);
	if (1 == b)
	{
		printf("正在退出");
		Sleep(1500);
		system("cls");
		main();
	}
	if (2 == b)
	{
		printf("请输入原密码:");
		scanf("%s",arr);
		for (i = 1; i <= 3; i++)
		{
			if (strcmp(arr, password1) == 0)
			{
				printf("请输入新密码:");
				scanf("%s", password3);
				strcpy(password1, password3);
				printf("修改成功");
				break;
			}
			else
			{
				printf("密码错误\n");
			}
		}
		if (i > 3)
		{
			printf("修改失败\n");
		}
		main();
	}
	return 0;
}