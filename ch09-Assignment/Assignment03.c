/*
	���ϸ�: Assignment03 (���̵�: *)
	����: �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	�ۼ���: ������
	��¥: 2025.10.05
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void Am03()
{
	char str[200];		// ���ڿ��� ������ �迭
	int i = 0;

	printf("���ڿ�? ");	// ���� �Է� ����
	fgets(str, sizeof(str), stdin);

	while(str[i] != '\0')		// ���ڿ��� ó������ ������ ��ȸ
	{
		char ch = str[i];		// ���� ���ڸ� Ȯ���ϱ� ���� ������ ����

		if (islower(ch))		// �ҹ������� Ȯ��
		{
			str[i] = toupper(ch);	// �ҹ����̸� �빮�ڷ� ��ȯ�Ͽ� ���� ��ġ�� ����
		}
		else if (isupper(ch))	// �빮������ Ȯ��
		{
			str[i] = tolower(ch);	// �빮���̸� �ҹ��ڷ� ��ȯ�Ͽ� ���� ��ġ�� ����
		}
		i++;
	}

	printf("��ȯ ��: %s", str);
}

int main()
{
	Am03();
	return 0;
}