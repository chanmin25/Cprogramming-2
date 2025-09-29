/*
	���ϸ�: Assignment12 (���̵�: ***)
	����: ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ��� ã�� �ε����� �迭�� �����ؼ� �����ϴ� find_all_in_array �Լ���
	�ۼ��Ͻÿ�. �� �Լ��� ã�� �׸��� ������ �����Ѵ�. ���� ��� �迭���� 12�� 2�� ã������ 2�� �����ϰ� ã�� �׸��� �ε����� �Ű������� �ε���
	�迭�� �����Ѵ�. �׸��� ã�� �� ������ 0�� �����Ѵ�. 
	�ۼ���: ������
	��¥: 2025.9.29
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(int* arr, int size, int key, int* indices)
{
	int found_count = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			indices[found_count] = i;
			found_count++;
		}
	}
	return found_count;
}

void Am12()
{
	int array[] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };		// ���� �迭
	int size = sizeof(array) / sizeof(array[0]);
	int found[10];		// ������ �迭 10���� �ϱ� 
	int find;
	int i;

	printf("���� �迭: ");		// ���� �迭 ���� ���
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");

	printf("ã�� ��? ");		// �Է� �ޱ� 
	scanf("%d", &find);

	int count = find_all_in_array(array, size, find, found);	// ȣ���Ͽ� Ű ���� �˻��ϰ�, ã�� ������ count ������ ����

	if (count > 0)				// 1�� �̻� ã���� ���  
	{
		printf("ã�� �׸��� ��� %d���Դϴ�.\n", count);
		printf("ã�� �׸��� �ε���: ");
		for (i = 0; i < count; i++)	
		{
			printf("%d ", found[i]);
		}
		printf("\n");
	}
	else		// �ϳ��� ��ã�������
	{
		printf("ã�� �׸��� ��� 0�� �Դϴ�.\n");
	}
}

int main()
{
	Am12();
	return 0;
}