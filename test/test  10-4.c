#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
void jiemian1()
{
	printf("****************\n");
	printf("****��ӭʹ��****\n");
	printf("****************\n");
	printf("##��¼####ע��##\n");
	printf("    1        2  \n");
}
void jiemian2()
{
	printf("##�˳�##�޸�����##\n");
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
			printf("�������û���������\n");
			printf("�û�����");
			scanf("%s", &acc1);
			printf("���룺");
			scanf("%s", &password2);
			if (strcmp(acc1, acc2) == 0 && strcmp(password2, password1) == 0)
			{
				printf("��¼�ɹ�");
				break;
			}

			else
			{
				printf("��¼ʧ�ܣ������µ�¼");
			}
		}
	}
	if (2 == a)
	{
		printf("�������û�����");
		scanf("%s", acc2);
		printf("���������룺");
		scanf("%s", password1);
		printf("ע��ɹ����ѵ�¼\n");
		system("cls");
	}
	jiemian2();
	scanf("%d",&b);
	if (1 == b)
	{
		printf("�����˳�");
		Sleep(1500);
		system("cls");
		main();
	}
	if (2 == b)
	{
		printf("������ԭ����:");
		scanf("%s",arr);
		for (i = 1; i <= 3; i++)
		{
			if (strcmp(arr, password1) == 0)
			{
				printf("������������:");
				scanf("%s", password3);
				strcpy(password1, password3);
				printf("�޸ĳɹ�");
				break;
			}
			else
			{
				printf("�������\n");
			}
		}
		if (i > 3)
		{
			printf("�޸�ʧ��\n");
		}
		main();
	}
	return 0;
}