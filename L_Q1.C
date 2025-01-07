#include<stdio.h>
#include<conio.h>

// WAP to print all alphabets from 'a' to 'z' by skipping 3 alphabets using a do-while loop.

main()
{
	char alp = 'a';
	clrscr();

	do
	{
	  printf("%c\n",alp);
	  alp += 4;
	}
	while(alp <= 'z');

	getch();
}