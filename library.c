#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct library 
{
	char book_name[100];
	char author_name[100];
	int cost;
	int no_of_pages;
};

int main() 
{
	struct library lib[100];

	int i, j, count;
	char search[50];
	i = 0;
	j = 0;
	count = 0;

	printf("*******************WELCOME TO DHIRAJ'S LIBRARY*******************\n\n\n");

	while(j!=5) 
	{
		printf(" 1. Add Book details\n ");
		printf(" 2. Display the list of books and its details\n ");
		printf(" 3. Display the total no. of books in the library\n ");
		printf(" 4. Search the book\n ");
		printf(" 5. Exit\n\n");
		printf(" Enter your choice: ");
		scanf(" %d", &j);
		system("cls");

		switch(j) 
		{
			case 1:
				printf("*******************WELCOME TO DHIRAJ'S LIBRARY*******************\n\n\n");
				printf(" \nYou can add the details of the book ");
				printf(" \nEnter the book name: ");
				scanf(" %s", lib[i].book_name);
				printf(" \nEnter the author name: ");
				scanf(" %s", lib[i].author_name);
				printf(" \nEnter the number of pages: ");
				scanf(" %d", &lib[i].no_of_pages);
				printf(" \nEnter the cost of the book: ");
				scanf(" %d", &lib[i].cost);
				count = count + 1;
				i = i + 1;
				system("cls");
				printf("*******************WELCOME TO DHIRAJ'S LIBRARY*******************\n\n\n");
				break;

			case 2:
				printf("*******************WELCOME TO DHIRAJ'S LIBRARY*******************\n\n\n");
				if (count==0) 
				{
					printf(" \nThere are no books stored!!\n\n ");
				} 
				else 
				{
					printf(" \nlist books are: \n");
					for(i=0; i< count; i++) 
					{
						printf(" \nDetails of book %d: ",i+1);
						printf(" \nThe name of the book is: %s ", lib[i].book_name);
						printf(" \nThe name of the author is: %s ", lib[i].author_name);
						printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);
						printf(" \nThe cost of the book is: %d ", lib[i].cost);
						printf(" \n\n++*============================================================*++\n\n");
					}
				}
				break;

			case 3:
				printf("*******************WELCOME TO DHIRAJ'S LIBRARY*******************\n\n\n");
				printf(" \nTotal number of books in the library are: %d\n\n ", count);
				break;

			case 4:
				printf("*******************WELCOME TO DHIRAJ'S LIBRARY*******************\n\n\n");
				printf("Enter the name of book to search: ");
				scanf("%s",&search);
				for(i=0; i<=count; i++)
				{
					if(strcmp(lib[i].book_name,search)==0)
					{
						printf(" \nThe book found: \n");
						printf(" \nThe name of the book is: %s ", lib[i].book_name);
						printf(" \nThe name of the author is: %s ", lib[i].author_name);
						printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);
						printf(" \nThe cost of the book is: %d", lib[i].cost);
						printf(" \n\n++*============================================================*++\n\n");
						break;
					}
					
				}
				if(strcmp(lib[i].book_name,search)!=0)
				   printf("The book not found..!\n Plz enter a vaild book name..!\n\n");
				break;

			case 5:
				exit(0);

			default:
				printf("*******************WELCOME TO DHIRAJ'S LIBRARY*******************\n\n\n");
				printf(" \nInvalid number entered\n\n ");
		}

	}
	return 0;
}

