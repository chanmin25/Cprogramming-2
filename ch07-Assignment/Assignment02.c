/* 
	���ϸ�: Assignment02 (���̵�: *)
	����: �������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�. ũ�Ⱑ 10�� �Ǽ��� �迭�� ���Ͽ� ���������� ����
	ä����� �Ѵ�. ù ��° ���� ���� ���� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.9.23
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am02()
{
	int i;						// ����
	double arr[10];
	double first, common;

	printf("ù ��° ��? ");		// �Է¹ޱ�
	scanf("%lf", &first);

	printf("����? ");
	scanf("%lf", &common);

	arr[0] = first;			// ù ��° ���� �ٷ� ����
	for (i = 1; i < 10; i++)	// ������ �� ä���
	{
		arr[i] = arr[i - 1] * common;
	}

	for (i = 0; i < 10; i++)	// �迭 ����ϱ�
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");
}

int main()
{
	Am02();
	return 0;
}