#include<stdio.h>
#pragma pack(1)
struct abc
{
	char a;
	int b;
};
int main()
{
	struct abc s;

	printf("%ld\n", sizeof(s));
	return 0;
}
