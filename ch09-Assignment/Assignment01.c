/*
	���ϸ�: Assignment01 (���̵�: *)
	����: �� ���� ���ڿ��� �Է¹޾Ƽ� ���� ����(' ', '\n', '\t', '\f', '\r', '\v')�� ������ ���� ���α׷��� �ۼ��Ͻÿ�. 
	�ۼ���: ������
	��¥: 2025.10.05
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>		// isspace �Լ��� ����ϱ� ���� ����

void Am01()
{
	char str[200];		// ������ �迭
	int count = 0;		// ���� ���ڸ� �� ����
	int i = 0;

	printf("���ڿ�? ");		// �� �� �Է� �ޱ�
	fgets(str, sizeof(str), stdin);		// fgets�� ���⸦ ������ �� �� ��ü�� ����

	while (str[i] != '\0')
	{
		if (isspace(str[i]))	// str[i] �� NULL ���� '\0'�� ���� ������ �ݺ�
		{
			count++;	// ���� ���ڰ� ������ ����
		}
		i++;		// ���� ���ڷ� �̵�
	}

	printf("\n���� ������ ����: %d\n", count);		// ��� ���
}

int main()
{
	Am01();
	return 0;
}