#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct computer {
	float cost;
	int year;
	int cpu_speed;
	char cpu_type[16];
};

typedef struct computer SC;

void DataReceive(SC *ptr_s);

int main(void)
{
	SC model;

	DataReceive(&model);
	printf("Here is what you entered:\n");
	printf("Year: %d\n", model.year);
	printf("Cost: $%6.2f\n", model.cost);
	printf("CPU type: %s\n", model.cpu_type);
	printf("CPU speed: %d MHz\n", model.cpu_speed);

	return 0;
}
void DataReceive(SC *ptr_s)
{
	printf("The type of your CPU is: \n");
	fgets((*ptr_s).cpu_type, 16, stdin);
	printf("Speed of the CPU?\n");
	scanf("%d", &(*ptr_s).cpu_speed);
	printf("year computer was made\n");
	scanf("%d", &(*ptr_s).year);
	printf("cost of computer\n");
	scanf("%f", &(*ptr_s).cost);
}
