/*
	���ϸ�: Assignment18 (���̵�: ***)
	 ����: ���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´�. �ִ� 10���� ������ ���Ҹ� ������ �� �ִ�
	 ����(set)�� �����Ͻÿ�. ������ �Է¹޾� ������ ���ҷ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����Ͻÿ�. 
	 �ۼ���: ������
	 ��¥: 2025.9.27
	 ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am18()
{
	int set[10];
	int count = 0;
	int num;
	int i;

	while (count < 10)
	{
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &num);
		
		int duplication = -1;			// �ߺ� �˻� , -1�� �ߺ��� ã�� ������ �ǹ� 
		for (i = 0; i < count; i++)
		{
			if (set[i] == num)
			{
				duplication = i;		// �ߺ��� ã���� �ش� �ε����� ����
				break;
			}
		}

		if (duplication != -1)			// -1�� �ƴϸ� (�ߺ��� ã�Ҵٸ�)
		{
			printf("�ش� ���Ҵ� �̹� [%d]�� �����մϴ�.\n", num, duplication);
		}
		else	// �ߺ��� �ƴ϶��
		{
			set[count] = num;
			count++;
		}

		printf("SET = { ");		// ���� ���� ���� ���
		for (i = 0; i < count; i++)
		{
			printf("%d", set[i]);

			if (i < count - 1)
			{
				printf(", ");
			}
		}

		printf(" } \n\n");
	}
	printf("������ ���� á���ϴ�. ���α׷��� �����մϴ�.\n");
}

int main()
{
	Am18();
	return 0;
}