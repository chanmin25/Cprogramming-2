/*
	���ϸ�: Assignment11 (���̵�: ***)
	����: ���簢���� ���̿� �ѷ��� ���ϴ� get_rect_info �Լ��� �ۼ��Ͻÿ�. ���簢���� ����, ������ ���̸� �Է¹��� ���� get_rect_info
	�Լ��� �̿��ؼ� ���簢���� ���̿� �ѷ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.9.29
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(double wi, double he, double* area, double* peri)	// ����ϴ� �Լ�
{
	*area = wi * he;
	*peri = 2 * (wi + he);
}

void Am11()
{
	double w, h;
	double a = 0.0, p = 0.0;

	printf("����? ");		// ���� �Է¹ޱ�
	scanf("%lf", &w);

	printf("����? ");		// ���� �Է¹ޱ�
	scanf("%lf", &h);

	get_rect_info(w, h, &a, &p);		// ȣ���Ͽ� a�� p ������ ��� ���

	printf("����: %.2lf, �ѷ�: %.2lf\n", a, p);		// ���
}

int main()
{
	Am11();
	return 0;
}