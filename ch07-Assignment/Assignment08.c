/* 
	���ϸ�: Assignment08
	 ����: ��ǰ ������ ����� ������ �迭�� ���Ͽ� �������� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�, ��ǰ ������
	 ����� �迭�� ũ��� 5�̰�, ��ǰ ������ �Է¹޾Ƽ� ����Ѵ�. ���ε� ������ ������ �迭�� �����ؾ� �Ѵ�.
	 �ۼ���: ������
	 ��¥: 2025.9.23
	 ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am08()
{
	int original[5];
	double discount_price[5];
	double discount;
	int i;

	printf("��ǰ�� 5���� �Է��ϼ���: \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &original[i]);
	}

	printf("������(%)? ");
	scanf("%lf", &discount);

	for (i = 0; i < 5; i++)
	{
		discount_price[i] = original[i] * (1 - discount / 100.0);
	}
	for (i = 0; i < 5; i++)
	{
		printf("����: %d�� --> ���ΰ�: %.1lf��\n", original[i], discount_price[i]);
	}


}

int main()
{
	Am08();
	return 0;
}