#include <stdio.h>

int main(void) {
	/*�̸�, ����, ������, Ű, */
	char name[256];
	printf("�̸��� �˴ϱ�? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̰� ��� �˴ϱ�? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����԰� ��� �˴ϱ�? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ��� �˴ϱ�? ");
	scanf_s("%lf", &height);

	char crime[256];
	printf("���˸��� ���ϱ�? ");
	scanf_s("%s", crime, sizeof(crime));

	printf("\n\n----------������ ����----------\n\n");

	printf("�̸�     : %s\n", name);
	printf("����     : %d\n", age);
	printf("������   : %.2f\n", weight);
	printf("Ű       : %.2lf\n", height);
	printf("���˸�   : %s\n", crime);

	return 0;
}