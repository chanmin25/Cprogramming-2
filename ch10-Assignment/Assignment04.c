/*
	���ϸ�: Assignment04 (���̵�: *)
	����: �������� ��Ÿ���� DATE ����ü�� DATE ����ü�� �Ű������� ���޹޾� ��¥�� "2022/1/1"ó�� ����ϴ� print_date �Լ��� �����Ͻÿ�.
	DATE ����ü�� print_date �Լ��� �̿��ؼ� �Է¹��� ��¥�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.10.01
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment04.h"

void Am04()
{
	struct DATE today;

	printf("��? ");
	scanf("%d", &today.year);

	printf("��? ");
	scanf("%d", &today.mon);

	printf("��? ");
	scanf("%d", &today.day);

	print_date(today);
	printf("\n");
}

void print_date(struct DATE d) {
	printf("%d/ %d/ %d", d.year, d.mon, d.day);
}

int main()
{
	Am04();
	return 0;
}