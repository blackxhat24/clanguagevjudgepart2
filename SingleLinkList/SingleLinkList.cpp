#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Data
{
	char nama[50];
	int age;
	
	Data* next;
}*curr,*head,*tail;

Data *pushhead(char *nama,int age)
{
	curr = (Data*)malloc(sizeof(Data));
	strcpy(curr->nama,nama);
	curr->age = age;
	curr->next = NULL;
	
	if(head == NULL)
	{
		head = tail = NULL;
	}
	else
	{
		curr->next = head;
		head = curr;
	}
	return curr;
	
}

void print()
{
	int count = 1;
	curr = head;
	while(curr != NULL)
	{
		printf("Data ke - %d\n",count);
		printf("Nama : %s\n",curr->nama);
		printf("Umur : %d\n",curr->age);
		curr = curr->next;
	}
}


int main()
{
	int menu = 0;
	char name[255];
	int umur = 0;
	do
	{
//		system("cls");
		puts("1. Push Head");
		puts("2. Print");
		puts("3. Exit");
		printf(">> ");
		scanf("%d",&menu);
		fflush(stdin);
		if(menu == 1)
		{
			scanf("%[^\n]",name);
			fflush(stdin);
			scanf("%d",&umur);
			fflush(stdin);
			pushhead(name,umur);
		}
		if(menu == 2)
		{
			print();
			system("pause");
		}
	}while(menu != 3);
	
	return 0;
}
