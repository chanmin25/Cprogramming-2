// ���� ����
#include <stdio.h>

#define SIZE 5

int ex07_11(void)
{
	int data[SIZE] = { 7, 3, 9, 5, 1 };
	int i, j;
	int index, temp;

	for (i = 0; i < SIZE - 1; i++)		// 0~(i-1)������ ���ĵ� �����̴�.
	{
		index = i;	// ������ �迭 �� ���� ���� ������ �ε���
		for (j = i + 1; j < SIZE; j++) {
			// data[i]~data[SIZE-1]�� ���� ���� ������ �ε����� index�� ����
			if (data[index] > data[j])
				index = j;
		}

		if (i != index) {
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;

		}// i��° ���Ұ� i��°�� ���� ���� �ȴ�.
	}
	printf("���� ��: ");
	for (i = 0; i < SIZE; i++)
		printf("%d", data[i]);
	printf("\n");
	return 0;
}
