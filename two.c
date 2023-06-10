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
	struct student s[3];

	s[0].roll = 20;
	s[0].marks = 60.0;
	strcpy(s[0].name, "Mwangi");
	printf("%d, %f, %s\n", s[0].roll, s[0].marks, s[0].name);
}
