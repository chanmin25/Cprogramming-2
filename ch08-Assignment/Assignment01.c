/*
	���ϸ�: Assignment01 (���̵�: *)
	����: ũ�Ⱑ 3�� double�� �迭�� ��� ���Ґl �ּҸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, �ּ� ���ϱ� �����ڸ� ������� ���ÿ�.
	�ۼ���: ������
	��¥: 2025.9.28
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am01()
{
	double arr[3] = { 0.0 };		// ���� �� �ʱ�ȭ
	int i;

	for (i = 0; i < 3; i++)			// �ݺ��� ����ؼ� �� ������ �ּ� ���
	{
		printf("x[%d]�� �ּ�: %p\n", i, arr + i);		
	}
}

int main()
{
	Am01();
	return 0;
}