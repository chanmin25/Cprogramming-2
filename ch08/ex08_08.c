// �迭�� 0�� ���Ҹ� ����Ű�� �����Ϳ� ���� ������ ������ ���
#include <stdio.h>

int ex08_08(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("p= %p, ", p);
		printf("*p = %d\n", *p);
	}

	return 0;
}
