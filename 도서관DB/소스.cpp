#include <stdio.h>
#include <string.h>
#include <Windows.h>

struct member_info
{
	char neme[50];
	char ID[50];
	char passward[50];
	char email[50];
	char borrowing_book[256];
};

void menu();
int Input();
void search_book();
void borrrow_book();
void return_book();

int main()
{
	menu();

	return 0;
}

void menu()
{
	system("cls");

	printf("1. å �˻��ϱ� \n");
	printf("2. å �����ϱ� \n");
	printf("3. å �ݳ��ϱ� \n");
	printf("4. ���α׷� �����ϱ� \n\n");

	Input();
}

int Input()
{
	int input;
	printf("���ϴ� ���񽺸� ����ּ��� : ");
	scanf_s("%d", &input);

	switch (input)
	{
	case 1: search_book(); break;
	case 2: borrrow_book(); break;
	case 3: return_book(); break;
	case 4:	printf("���α׷� �����մϴ�"); break;
	default: printf("���� 1~4������ �Է����ּ���!\n\n"); Sleep(800);
		menu();
		break;
	}


	return 0;
}

void search_book()
{

}

void borrrow_book()
{

}

void return_book()
{

}