#include <stdio.h>
void put_bank(); //�Ա�
void takeOut_bank(); //���
void select_bank(); //��ȸ

int a, b, total = 0; //���Աݾ�, ����ݾ�, �ܰ� ��������

void put_bank() { //�Ա�
    printf("\n�Աݾ��� �Է��ϼ���.\n");
    scanf_s("%d", &a);
    total += a;
}
void takeOut_bank() { //���
    printf("\n��ݾ��� �Է��ϼ���.\n");
    scanf_s("%d", &b);
    if (total < b) printf("�ܰ� ���� �����մϴ�.\n");
    else total -= b;
}
void select_bank() {
    printf(" ���Աݾ� ����ݾ�    �ܰ�  \n");
    printf("----------------------------\n");
    printf("%8d %8d %8d\n", a, b, total);
}

void main() {
    int num;
    printf("1���� �Ա�, 2���� ���, 3���� ��ȸ, 0���� ����\n");
    scanf_s("%d", &num);
    if (num != 0) {
        switch (num) {
        case 1:
            put_bank(); printf("�ܰ�: %d\n", total);
            break;
        case 2:
            takeOut_bank(); printf("�ܰ�: %d\n", total);
            break;
        case 3:
            select_bank();  printf("�ܰ�: %d\n", total);
            break;
        default:
            printf("�ٽ� �Է����ּ���\n");
            break;
        }
        main();
    }
    else printf("\n�̿��� �ּż� �����մϴ�.\n");
}