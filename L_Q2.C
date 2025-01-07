#include<stdio.h>
#include<conio.h>

// WAP to count the total number of digits in a number.

main()
{
	int num,i,rep = 0;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);
	for(i = 1; num != 0; i++)
	{
		num /= 10;
		rep++;
	}
	printf("The length of the number is %d digit.",rep);
	getch();

}