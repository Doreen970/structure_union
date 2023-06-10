#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	float marks;
	char name[10];
};
int main()
{
	int a;
	struct student s;

	printf("%ld\n", sizeof(s));
	s.roll = 3;
	s.marks = 60.5;
	strcpy(s.name, "Jenny");
	printf("%d\n", s.roll);
	printf("%f\n", s.marks);
	printf("%s\n", s.name);
}
