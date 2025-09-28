/*
	���ϸ�: Assignment09 (���̵�: **)
	����: �� ũ�Ⱑ 5�� 2���� int �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_2d_array �Լ��� �ۼ��Ͻÿ�. �Լ��� �Ű������� �迭 ��ü��
	���� �����Ϳ� �迭�� �� ũ�⸦ �����Ѵ�. �� ũ�Ⱑ 5, �� ũ�Ⱑ 4�� 2���� �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.9.28
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_2d_array(int arr[][5], int size, int value)		// ���� ũ�Ⱑ 5�� 2���� �迭�� ä��� �Լ�
{
	int i, j;
	for (i = 0; i < size; i++)			// �� �ݺ� (0 ~ size-1)
	{
		for (j = 0; j < 5; j++)			// �� �ݺ� (0 ~ 4)
		{
			arr[i][j] = value;
		}
	}
}

void Am09()
{
	int my_array[4][5];			// �� ũ�Ⱑ 4, �� ũ�Ⱑ 5�� 2���� �迭 ����
	int fill_value;
	int i, j;

	printf("�迭�ǿ��ҿ� ������ ��? ");		// �Է� ����
	scanf("%d", &fill_value);

	fill_2d_array(my_array, 4, fill_value);	// �Լ� ȣ���Ͽ� �迭 ä��
			// �迭 �̸�, �� ũ��(4), ä�� �� ����
	for (i = 0; i < 4; i++)		// �� �ݺ�
	{
		for (j = 0; j < 5; j++)	// �� �ݺ�
		{
			printf("%2d ", my_array[i][j]);
		}
		printf("\n");	// �� �� ��� ������ �� �ٲ�
	}
}

int main()
{
	Am09();
	return 0;
}