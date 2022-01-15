#include<stdio.h>

#include<ctype.h>

#include<string.h>

int i;

int e=0;

char input[10];

void E();

void T();

void E1();

void T1();

void F();

int main()

{		i=0;

	printf("Enter the expression:");

	gets(input);

	E();

	if(strlen(input)==i && e==0)

		printf("String accepted");

	else

		printf("string rejected");

	

}

void E()

	{

		T();

		E1();

	}

void T()

	{

		F();

		T1();

	}

void E1()

	{

		if(input[i]=='+')

			{

				i++;

				T();

				E1();

			}

	}

void T1()

	{

		if(input[i]=='*')

			{

				i++;

				F();

				T1();

			}

	}

void F()

	{

		if(isalnum(input[i]))

			i++;

		else if(input[i]=='(')

			{

				i++;

				E();

				if(input[i]==')')

				i++;

				else

					e=1;

			}	

			else e=1;	

	}
