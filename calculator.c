#include <stdio.h>

int plus(int p, int r); //더하기
int minus(int p, int r); //빼기
int multiplication(int p, int r); //곱하기
int division1(int p, int r); //나누기(몫)
int division2(int p, int r); //나누기(나머지)

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
		printf("첫번째 값 과 두번째 값을 입력해주세요.");
		scanf_s("%d %d", &a, &b);

		printf("어떻게 계산하시겠어요?\n");
		printf("[0]은 종료 [1]은 더하기 [2] 빼기 [3] 곱하기 [4] 나누기\n");
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
			printf("잘못 입력하셨습니다. 다시 입력해 주세요.\n\n");
		}
		printf("결과: %d \n\n", result);
	}
	printf("이용해 주셔서 감사합니다~");
}
