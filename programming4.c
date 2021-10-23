/* 프로그래밍 연습 챕터 4
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
void main() {
	//1번
	double a;
	printf("원 반지름 입력: ");
	scanf_s("%lf", &a);
	printf("원 반지름: %lf\n", a);
	printf("원 면적: %lf\n", a * a * PI);
	printf("원 둘레: %lf\n", 2 * PI * a);
	puts("");

	//2번
	double b;
	printf("화씨 온도 입력: ");
	scanf_s("%lf", &b);
	printf("입력된 화씨 온도: %lf\n", b);
	printf("섭씨 온도 : %.4lf\n", 5.0 / 9.0 * (b - 32.0));
	puts("");

	//3번
	const double ping = 3.305785;
	double c;
	printf("평수 입력: ");
	scanf_s("%lf", &c);
	printf("입력된 평수: %lf\n", c);
	printf("제곱미터: %lf\n", c * ping);
	puts("");

	//4번
	char sd;
	printf("\n문자 입력: ");
	sd = getchar();
	printf("%c %#o %d %#x\n", sd, sd, sd, sd);
	puts("");

	//5번
	double e, f;
	printf("두 실수 입력: ");
	scanf_s("%lf %lf", &e, &f);
	printf("가로: %lf 세로: %lf\n", e, f);
	printf("사각형 면적: %12.3lf\n", e * f);
	printf("삼각형 면적: %-12.3lf\n", e * f / 2);
	puts("");

	//6번
	int g, h;
	printf("두 정수를 입력하시오.\n");
	scanf_s("%d %d", &g, &h);
	printf("합: %d + %d = %d\n", g, h, g + h);
	printf("평균: %d / 2 = %lf\n", g + h, ((double)g + (double)h) / 2);
	puts("");
}