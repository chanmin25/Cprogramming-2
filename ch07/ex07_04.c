// �迭�� ũ�⺸�� �ʱⰪ�� ���� �����ϴ� ���

#include <stdio.h>

int ex07_04(void)
{
	int amount[5] = { 1, 1, 5 };		// 1, 1, 5, 0, 0���� �ʱ�ȭ
	int price[5] = { 0 };				// �迭 ��ü�� 0���� �ʱ�ȭ but 1�� �ٲ۴� �ص� 1, 0, 0, 0, 0���� �ʱ�ȭ��.
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
		printf("%d ", amount[i]);
	printf("\n");

	printf("price = ");
	for (i = 0; i < 5; i++)
		printf("%d", price[i]);
	printf("\n");
	return 0;
}
