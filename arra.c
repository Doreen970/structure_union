#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[16];
	int age;
	int marks;
};
typedef struct student ST;
void display(ST *b);
int main(void)
{
	ST stream[2] = {
		{
			"Esther Mwangi",
			30,
			90
		},
		{
			"Francis Ngigi",
			25,
			70
		}
	};
	int i;

	for (i=0; i<2; i++)
		display(&stream[i]);
	return 0;
}
void display(ST *b)
{
	printf("%s\n", (*b).name);
	printf("%d\n", (*b).age);
	printf("%d\n", (*b).marks);
}
