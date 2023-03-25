#include <stdio.h>

int main(void) {
	/*이름, 나이, 몸무게, 키, */
	char name[256];
	printf("이름이 됩니까? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이가 어떻게 됩니까? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게가 어떻게 됩니까? ");
	scanf_s("%f", &weight);

	double height;
	printf("키가 어떻게 됩니까? ");
	scanf_s("%lf", &height);

	char crime[256];
	printf("범죄명이 뭡니까? ");
	scanf_s("%s", crime, sizeof(crime));

	printf("\n\n----------범죄자 정보----------\n\n");

	printf("이름     : %s\n", name);
	printf("나이     : %d\n", age);
	printf("몸무게   : %.2f\n", weight);
	printf("키       : %.2lf\n", height);
	printf("범죄명   : %s\n", crime);

	return 0;
}