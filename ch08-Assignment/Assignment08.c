/*
	���ϸ�: Assignment08 (���̵�: **)
	����: ������ �迭�� Ư�� ������ ä��� fill_array �Լ��� �ۼ��Ͻÿ�. ��, �����Ϳ� ������ ������ �����ڸ� �̿��Ѵ�. fii_array �Լ���
	�̿��ؼ� ũ�Ⱑ 20�� int �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.9.28
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int* arr, int size, int value)		// Am08���� �������� 
{
	int i;
	for (i = 0; i < size; i++)
	{									// ������ ����� ������ �����ڸ� ����Ͽ� �� �Ҵ�
		*(arr + i) = value;				// arr[i] = value; �� ������ �ǹ�
	}
}

void Am08()
{
	int array[20];			// ũ�Ⱑ 20�� int �迭 ���� 
	int fill_val;	
	int i;

	printf("�迭�� ���ҿ� ������ ��? ");	// ä�� ���� ����
	scanf("%d", &fill_val);

	fill_array(array, 20, fill_val);		// �Լ� ȣ���Ͽ� �迭 ä��

	printf("�迭: ");
	for (i = 0; i < 20; i++)
	{
		printf("%d ", array[i]);			// ���
	}
}

int main()
{
	Am08();
	return 0;
}