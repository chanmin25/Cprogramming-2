/*
	���ϸ�: Assignment02 (���̵�: **)
	����: ���� �迭�� �Ű������� ���޹޾� ���� ����(' ', '\n', '\t', '\f', '\r', '\v')�� ��� �����ϴ� remove_space �Լ��� �ۼ��Ͻÿ�. remove_space
	�Լ��� �̿��ؼ� �Է¹��� ���ڿ����� ��ĭ�� ��� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.10.05
	����: v1.0
 */

#define _CRTSECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void remove_space(char* str)
{
	int read = 0;		// �о�� �ε���
	int write = 0;		// ������ �ƴ� ���ڸ� ���� �� �ε���

	while (str[read] != '\0')	// \0 ���� ������ �ݺ�
	{
		if (!isspace(str[read]))	// ���鹮�ڰ� �ƴ϶�� 
		{
			str[write] = str[read];	// �ش� ���ڸ� ����
			write++;		// ���� ��ġ�� �̵�
		}
		read++;		// �б� ���� �̵�
	}
	str[write] = '\0';	// ���� �˸��� NULL ���� �߰�
}

void Am02()
{
	char bu[200];

	printf("���ڿ�? ");		// �Է¹ޱ�
	fgets(bu, sizeof(bu), stdin);

	remove_space(bu);		// �Լ� ȣ���Ͽ� ���� ����

	printf("���� ���� ������: %s", bu);		// ���
}

int main()
{
	Am02();
	return 0;
}