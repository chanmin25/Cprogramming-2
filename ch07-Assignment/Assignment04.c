/*
	���ϸ�: Assignment04 (���̵�: **)
	����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� 
	����ϴ� ���α׷��� �ۼ��Ͻÿ�. �迭�� �ʱⰪ�� ������� ���Ͻÿ�
	�ۼ���: ������
	��¥: 2025.9.27
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am04()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };	// ���� �ʱ�ȭ
	int max_val, min_val;
	int max_idx, min_idx;
	int i;
	
	max_val = arr[0];		// ù ���� ���Ҹ� �������� �ʱ�ȭ ����
	min_val = arr[0];
	max_idx = 0;
	min_idx = 0;

	for (i = 1; i < 10; i++)	// �ִ�, �ּڰ� ã��	arr[0]�� �ʱⰪ���� ����� arr[1]���� ����
	{							
		if (arr[i] > max_val)
		{
			max_val = arr[i];	// �ִ��� ���ο� ������ ��ü
			max_idx = i;		// �ִ� �ε����� ���� �ε����� ��ü
		}
		if (arr[i] < min_val)	// �ּڰ��� ���� ���
		{
			min_val = arr[i];
			min_idx = i;
		}
	}

	printf("�迭: ");		// ��� ���
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n\n");

	printf("�ִ�: %d, �ε���=%d\n", max_val, max_idx);
	printf("�ּڰ�: %d, �ε���=%d\n", min_val, min_idx);
}

int main()
{
	Am04();
	return 0;
}