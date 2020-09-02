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

	printf("éxï•ëçäzÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢");
	scanf("%s",inputStr);
	amount = atoi(inputStr);

	printf("éQâ¡êlêîÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ÅF");
	scanf("%s", inputStr);
	people = atoi(inputStr);

	dnum = (double)amount / people;
	pay = (int)(dnum / 100) * 100;
	if (dnum > pay) {
		pay = pay + 100;
	}
	payorg = amount - pay * (people - 1);

	printf("***éxï•ëçäz***\n");
	printf("1êlÇ†ÇΩÇË%dâ~(%dêl)ÅAä≤éñÇÕ%dâ~Ç≈Ç∑ÅB\n", pay, people - 1, payorg);

	return 0;
}