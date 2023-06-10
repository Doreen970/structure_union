#include<stdio.h>
struct abc
{
	char a;
	int b;
};
int main(void)
{
	struct abc s;

	printf("%ld\n", sizeof(s));
}
