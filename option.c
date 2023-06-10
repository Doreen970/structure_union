#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct client {
	char name[16];
	int age;
	char a_b_c;
	union {
		char Salon[15];
		char Spa[17];
	} Provider;
};
void Enter(struct client *s);
void Display(struct client *s);
int main(void)
{
	struct client choice;

	Enter(&choice);
	Display(&choice);
	return (0);
}
void Enter(struct client *s)
{
	char answer[4];
	
	printf("please write your name\n");
	scanf("%s", s->name);
	printf("write your age\n");
	scanf("%d", &s->age);

	printf("Do you go to salon? Yes or No\n");
	fgets(answer, 4, stdin);
	fgets(answer, 4, stdin);
	if ((answer[0] == 'Y') || (answer[0] == 'y'))
	{
		printf("give your salon name\n");
		scanf("%s", s->Provider.Salon);
		(*s).a_b_c = 'a';
	}
	else 
	{
		printf("Do you use spa\n");
		fgets(answer, 4, stdin);
		if ((answer[0] == 'Y') || (answer[0] == 'y'))
		{
			printf("Write your spa name\n");
			scanf("%s", s->Provider.Spa);
			(*s).a_b_c = 'b';
		}
		else
		{
			(*s).a_b_c = 'c';
		}
	}
}
void Display(struct client *s)
{
	printf("The following were your answers:\n");
	printf("Your name is: %s\n", (*s).name);
	printf("age: %d\n", (*s).age);
	if ((*s).a_b_c == 'a')
		printf("your salon is: %s\n", (*s).Provider.Salon);
	else if ((*s).a_b_c == 'b')
		printf("your spa: %s\n", (*s).Provider.Spa);
	else
		printf("You don't visit salon nor spa\n");
}




