#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void) {
	int amount;
	int people;
	int pay;
	int payorg;

	String inputStr;
	double dnum;

	printf("�x�����z����͂��Ă�������");
	scanf("%s",inputStr);
	amount = atoi(inputStr);

	printf("�Q���l������͂��Ă��������F");
	scanf("%s", inputStr);
	people = atoi(inputStr);

	dnum = (double)amount / people;
	pay = (int)(dnum / 100) * 100;
	if (dnum > pay) {
		pay = pay + 100;
	}
	payorg = amount - pay * (people - 1);

	printf("***�x�����z***\n");
	printf("1�l������%d�~(%d�l)�A������%d�~�ł��B\n", pay, people - 1, payorg);

	return 0;
}