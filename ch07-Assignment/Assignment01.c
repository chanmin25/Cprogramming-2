/* 
	���ϸ�: Assignment01 (���̵�: *)
	����: ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�. ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
	ù���� ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.9.23
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am01()
{
	int arr[10];			// ����
	int first, common;
	int i;

	printf("ù ��° ��? ");		// �Է¹ޱ�
	scanf("%d", &first);

	printf("����? ");
	scanf("%d", &common);

	for (i = 0; i < 10; i++)	// �迭�� �� ä���
	{
		arr[i] = first + (i * common);
	}

	for (i = 0; i < 10; i++)	// �迭 ����ϱ�
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	Am01();
	return 0;
}