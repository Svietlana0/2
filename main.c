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

	printf("支払総額を入力してください");
	scanf("%s",inputStr);
	amount = atoi(inputStr);

	printf("参加人数を入力してください：");
	scanf("%s", inputStr);
	people = atoi(inputStr);

	dnum = (double)amount / people;
	pay = (int)(dnum / 100) * 100;
	if (dnum > pay) {
		pay = pay + 100;
	}
	payorg = amount - pay * (people - 1);

	printf("***支払総額***\n");
	printf("1人あたり%d円(%d人)、幹事は%d円です。\n", pay, people - 1, payorg);

	return 0;
}