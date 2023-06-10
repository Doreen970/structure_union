#include<stdio.h>
struct student
{
	int roll;
	char name[10];
	float marks;
};
int main()
{
	struct student s = {9, "wanyama", 30.2};
	
	struct student *ptr = &s;
	printf("%d, %s, %f\n", ptr->roll, ptr->name, ptr->marks);
}
