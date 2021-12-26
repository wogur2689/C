#include <stdio.h>
void put_bank(); //입금
void takeOut_bank(); //출금
void select_bank(); //조회

int a, b, total = 0; //총입금액, 총출금액, 잔고 변수선언

void put_bank() { //입금
    printf("\n입금액을 입력하세요.\n");
    scanf_s("%d", &a);
    total += a;
}
void takeOut_bank() { //출금
    printf("\n출금액을 입력하세요.\n");
    scanf_s("%d", &b);
    if (total < b) printf("잔고에 돈이 부족합니다.\n");
    else total -= b;
}
void select_bank() {
    printf(" 총입금액 총출금액    잔고  \n");
    printf("----------------------------\n");
    printf("%8d %8d %8d\n", a, b, total);
}

void main() {
    int num;
    printf("1번은 입금, 2번은 출금, 3번은 조회, 0번은 종료\n");
    scanf_s("%d", &num);
    if (num != 0) {
        switch (num) {
        case 1:
            put_bank(); printf("잔고: %d\n", total);
            break;
        case 2:
            takeOut_bank(); printf("잔고: %d\n", total);
            break;
        case 3:
            select_bank();  printf("잔고: %d\n", total);
            break;
        default:
            printf("다시 입력해주세요\n");
            break;
        }
        main();
    }
    else printf("\n이용해 주셔서 감사합니다.\n");
}