#include <stdio.h>

int plus(int p, int r); //���ϱ�
int minus(int p, int r); //����
int multiplication(int p, int r); //���ϱ�
int division1(int p, int r); //������(��)
int division2(int p, int r); //������(������)

int plus(int p, int r) {
	return p + r;
}
int minus(int p, int r) {
	return p - r;
}
int multiplication(int p, int r) {
	return p * r;
}
int division1(int p, int r) {
	return p / r;
}
int division2(int p, int r) {
	return p % r;
}
void main() {
	int a, b, c, result = 0;
	bool s = true;
	while (s) {
		printf("ù��° �� �� �ι�° ���� �Է����ּ���.");
		scanf_s("%d %d", &a, &b);

		printf("��� ����Ͻðھ��?\n");
		printf("[0]�� ���� [1]�� ���ϱ� [2] ���� [3] ���ϱ� [4] ������\n");
		scanf_s("%d", &c);

		switch (c) {
		case 0:
			s = false;
			break;
		case 1:
			result = plus(a, b);
			break;
		case 2:
			result = minus(a, b);
			break;
		case 3:
			result = multiplication(a, b);
			break;
		case 4:
			result = division1(a, b);
			break;
		case 5:
			result = division2(a, b);
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���.\n\n");
		}
		printf("���: %d \n\n", result);
	}
	printf("�̿��� �ּż� �����մϴ�~");
}