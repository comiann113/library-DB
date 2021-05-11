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

	printf("1. 책 검색하기 \n");
	printf("2. 책 대출하기 \n");
	printf("3. 책 반납하기 \n");
	printf("4. 프로그램 종료하기 \n\n");

	Input();
}

int Input()
{
	int input;
	printf("원하는 서비스를 골라주세요 : ");
	scanf_s("%d", &input);

	switch (input)
	{
	case 1: search_book(); break;
	case 2: borrrow_book(); break;
	case 3: return_book(); break;
	case 4:	printf("프로그램 종료합니다"); break;
	default: printf("숫자 1~4까지만 입력해주세요!\n\n"); Sleep(800);
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