// ��ũ�� ����� �迭�� ũ�⸦ �����ϴ� ���
#include <stdio.h>
#define ARR_SIZE 5	// �迭�� ũ��� ����� ��ũ�� ����� ����

int ex07_02(void)
{
	int arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		arr[i] = 0;
	}

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
