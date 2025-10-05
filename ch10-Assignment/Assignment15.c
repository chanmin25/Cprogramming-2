/*
	���ϸ�: Assignment15 (���̵�: ***)
	����: ���� ��ǥ�� ��Ÿ���� POINT ����ü�� ���ؼ� �� ���� ��ǥ�� �¹ٲٴ� swap_point �Լ��� �����Ͻÿ�. ũ�Ⱑ 10�� POINT ����ü
	�迭�� ���Ͽ� x��ǥ�� �������� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�. POINT ����ü �迭�� ���Ⱚ�� ������� ���Ѵ�.
	�ۼ���: ������
	��¥: 2025.10.05
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment15.h"

void swap_point(struct POINT* p1, struct POINT* p2)		// �� POINT ����ü�� ���� ��ȯ�ϴ� �Լ�
{
	struct POINT temp = *p1;		// temp�� p1�� ����Ű�� ���� ����
	*p1 = *p2;						// p1�� ����Ű�� ���� p2�� ���� ����
	*p2 = temp;						// p2�� ����Ű�� ���� temp�� ���� ����
}

void print_points(struct POINT arr[], int size)			// �迭�� ��� ��ǥ�� ����ϴ� �Լ�
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("(%d, %d) ", arr[i].x, arr[i].y);
		if ((i + 1) % 5 == 0)		// 5���� �߷��ϰ� �ٹٲ�
		{
			printf("\n");
		}
	}
}


void Am15()
{									// ũ�Ⱑ 10�� POINT ����ü �迭�� ������ ������ �ʱ�ȭ 
	struct POINT points[10] =
	{
		{7, 3}, {12, 93}, {22, 31}, {1, 20}, {34, 53}, {41, 2}, {32, 9}, {21, 31}, {8, 2}, {3, 5}
	};
	int size = 10;
	int i, j, min_idx;

	printf("<<���� ��>>\n");		// ���� �� �迭 ���
	print_points(points, size);

	for (i = 0; i < size; i++)		// x��ǥ�� �������� ���� ���� ����
	{
		min_idx = i;				// ���� ���ĵ��� ���� �κ��� ù ���� ���Ҹ� �ּڰ����� ����

		for (j = i + 1; j < size; j++)		// i + 1��° ���Һ��� ������ Ž���ϸ� ���� �ּڰ��� ã��
		{
			if (points[j].x < points[min_idx].x)	// ��������� �ּڰ�(point[min_idx].x)���� �� ���� x���� ã���� 
			{
				min_idx = j;		// �ּڰ��� �ε����� ���� 
			}
		}
		swap_point(&points[i], &points[min_idx]);	// �ּڰ��� ã������, ���� ��ġ (i)�� ���ҿ� ��ȯ
	}
	
	printf("<<���� ��>>\n");		// ���� �� �迭 ���
	print_points(points, size);
}

int main()
{
	Am15();
	return 0;
}