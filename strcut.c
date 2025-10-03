#include<stdio.h>
#include<stdlib.h>
struct book
{
	int book_no;
	char name[10];
	int price;
	int pages;
};

int main()
{   int i;
	struct book b1[3];

	for(i=1;i<=3;i++)
	{
		printf("\n Enter book no.==>");
		scanf("%d",&b1[i].book_no);
		printf("\n Enter name==>");
		flushall();
		gets(b1[i].name);

		printf("\n Enter price==>");
		scanf("%d",&b1[i].price);

		printf("\n Enter pages==>");
		scanf("%d",&b1[i].pages);
		clrscr();

	}

	printf("\n === BOOK ===");
	for(i=1;i<=3;i++)
	{
	printf("\n book no is= %d",b1[i].book_no);
	printf("\n name is= %s",b1[i].name);
	printf("\n book price is= %d",b1[i].price);
	printf("\n Pages is= %d",b1[i].pages);
	printf("\n");
	printf("\n");
	}
}