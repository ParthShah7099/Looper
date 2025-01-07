#include<stdio.h>
#include<conio.h>

//WAP to find the sum of a number's first and last digit.

main()

{
	int i,num,last,sum;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);
	last = num % 10;
	if(num < 0)
	{
		printf("Please enter positive number.");
	}
	else
	{
	for(i = 1; num > 10; i++)
	{
		num/=10;
	}

	sum = last+num;
	printf("The sum of the first and the last digit is: %d",sum);
	}
	getch();

}