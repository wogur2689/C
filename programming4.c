/* ���α׷��� ���� é�� 4
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
void main() {
	//1��
	double a;
	printf("�� ������ �Է�: ");
	scanf_s("%lf", &a);
	printf("�� ������: %lf\n", a);
	printf("�� ����: %lf\n", a * a * PI);
	printf("�� �ѷ�: %lf\n", 2 * PI * a);
	puts("");

	//2��
	double b;
	printf("ȭ�� �µ� �Է�: ");
	scanf_s("%lf", &b);
	printf("�Էµ� ȭ�� �µ�: %lf\n", b);
	printf("���� �µ� : %.4lf\n", 5.0 / 9.0 * (b - 32.0));
	puts("");

	//3��
	const double ping = 3.305785;
	double c;
	printf("��� �Է�: ");
	scanf_s("%lf", &c);
	printf("�Էµ� ���: %lf\n", c);
	printf("��������: %lf\n", c * ping);
	puts("");

	//4��
	char sd;
	printf("\n���� �Է�: ");
	sd = getchar();
	printf("%c %#o %d %#x\n", sd, sd, sd, sd);
	puts("");

	//5��
	double e, f;
	printf("�� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &e, &f);
	printf("����: %lf ����: %lf\n", e, f);
	printf("�簢�� ����: %12.3lf\n", e * f);
	printf("�ﰢ�� ����: %-12.3lf\n", e * f / 2);
	puts("");

	//6��
	int g, h;
	printf("�� ������ �Է��Ͻÿ�.\n");
	scanf_s("%d %d", &g, &h);
	printf("��: %d + %d = %d\n", g, h, g + h);
	printf("���: %d / 2 = %lf\n", g + h, ((double)g + (double)h) / 2);
	puts("");
}