/*
	���ϸ�: Assignment05 (���̵�: **)
	����: ��ҹ��ڸ� �������� �ʰ� ���ڿ��� ���ϴ� strcmp_ic �Լ��� �ۼ��Ͻÿ�. strcmp_ic(lhs, rhs) �Լ��� ���ϰ��� strcmp��
	���������� lhs�� rhs���� ũ�� 0���� ū ��, �� ���ڿ��� ������ 0, lhs�� rhs���� ������ 0���� ���� ���� �����Ѵ�. strcmp_ic
	�Լ��� �̿��ؼ� �Է¹��� �� ���ڿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.10.05
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmp_ic(const char* lhs, const char* rhs)		// ��ҹ��� ���� ���� ���ڿ� �� �Լ�
{
	while (tolower(*lhs) == tolower(*rhs))
	{
		if (*lhs == '\0')
		{
			return 0;
		}
		lhs++;
		rhs++;
	}
	return tolower(*lhs) - tolower(*rhs);
}

void Am05()
{
	char str1[100];
	char str2[100];

	printf("ù ��° ���ڿ�? ");
	fgets(str1, sizeof(str1), stdin);		// fgets�� ���� ����

	printf("�� ��° ���ڿ�? ");
	fgets(str2, sizeof(str2), stdin);

	size_t len1 = strlen(str1);			// fgets�� ���� ���� \n ���� ����
	if (len1 > 0 && str1[len1 - 1] == '\n')		// �������� \n�̸� \0���� �ٲ���
	{
		str1[len1 - 1] = '\0';
	}

	size_t len2 = strlen(str2);			// size_t�� ũ�⸦ ��Ÿ���� Ÿ��
	if (len2 > 0 && str2[len2 - 1] == '\n')
	{
		str2[len2 - 1] = '\0';
	}

	int result = strcmp_ic(str1, str2);	// ȣ���Ͽ� ����

	if (result == 0)		// ������� ���� �޽��� ���
	{
		printf("%s�� %s�� �����ϴ�.\n", str1, str2);
	}
	else if (result > 0)
	{
		printf("%s�� %s���� Ů�ϴ�.\n", str1, str2);
	}
	else
	{
		printf("%s�� %s���� �۽��ϴ�.\n", str1, str2);
	}
}

int main()
{
	Am05();
	return 0;
}