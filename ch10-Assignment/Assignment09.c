/*
	���ϸ�: Assignment09 (���̵�: **)
	����: PRODUCT ����ü�� �Ű������� ���޹޾� �ֹ� ó���� �ϴ� order �Լ��� �����Ͻÿ�. order �Լ��� PRODUCT ����ü�� �ֹ� ������ �Ű������� ���޹޴� 
	�Լ��̴� . ��� �ֹ� �������� ������ �ֹ��� �� �����Ƿ� 0�� �����ϰ� , ��� �ֹ� �������� ������ �ֹ� ������ŭ ��� ���ҽ�Ű��
	���� �ݾ��� �����Ѵ�. �ֹ� �������� 0�� �Էµ� ������ �ݺ��ؼ�  �ֹ� ó���� �ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	�ۼ���: ������
	��¥: 2025.10.03
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment09.h"

int od(struct PRODUCT* p, int quantity);

void Am09()
{
	struct PRODUCT my_product;
	int order;

	printf("��ǰ��? ");
	scanf("%s", my_product.name);

	printf("����? ");
	scanf("%d", &my_product.price);

	printf("���? ");
	scanf("%d", &my_product.stock);

	while (1)
	{
		printf("\n��ǰ: %s | ����: %d�� | ���� ���: %d��\n", my_product.name, my_product.price, my_product.stock);
		printf("�ֹ� ����? (0 �Է� �� ����): ");
		scanf("%d", &order);

		if (order == 0)
		{
			break;
		}

		int pay = od(&my_product, order);

		if (pay > 0)
		{
			printf("���� �ݾ�: %d�� ���: %d�� \n", pay, my_product.stock);
		}
		else
		{
			printf("��� �����մϴ�. \n");
		}
	}

	printf("\n ���α׷��� �����մϴ�.\n");
}

int od(struct PRODUCT* p, int quantity)
{
	if (p->stock < quantity)
	{
		return 0;
	}
	else
	{
		p->stock -= quantity;
		return p->price * quantity;
	}
}


int main()
{
	Am09();
	return 0;
}