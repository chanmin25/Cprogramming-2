/*
	���ϸ�: Assignment11 (���̵�: ***)
	����: PRODUCT ����ü �迭�� �̿��ؼ� ��ǰ���� �Է¹޾� �˻� �� �ֹ� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�. �ֹ� ������ �Է¹޾� ���� �ݾ���
	�˷��ְ�, ��ǰ ��� �ֹ� ������ŭ ���ҽ��Ѿ� �Ѵ�. ��ǰ������ �˻��� �� ���ų� ã�� ��ǰ�� ��� �ֹ� ���⺸�� ������ �ַ� �޽�����
	����Ѵ�. PRODUCT ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�. 
	�ۼ���: ������
	��¥: 2025.10.03
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Assignment11.h"

int find(struct PRODUCT products[], int size, char* name_to_find)   // �˻� �Լ�
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(name_to_find, products[i].name) == 0)        // ������ ��
        {
            return i;       // ã���� i�� ��ȯ
        }
    }
    return -1;      // ��ã������ -1 ��ȯ
}
void inventory(struct PRODUCT products[], int size)
{
    int i;
    for (i = 0; i < size; i++)      // �� ��ǰ ���� ���
    {
        printf("- ��ǰ��: %-10s | ����: %-8d | ���: %d\n",
            products[i].name, products[i].price, products[i].stock);
    }
}

void Am11() 
{
    struct PRODUCT products[3] =            // �̸� ������ �� �迭�� �ʱ�ȭ 
    {
        {"�Ƹ޸�ī��", 4000, 10},
        {"ī���", 4500, 10},
        {"�÷�ȭ��Ʈ", 5000, 10},
    };

    int size = 3;       // �迭 ũ�� 
    char search[51];    // �Է��� ������ ����
    int order;

    printf("�ֹ��� �����մϴ�. (�����Ϸ��� ��ǰ�� '0' �Է�)\n");

    while (1)           // ����ڰ� 0�� �Է��� ������ ���� ���� 
    {
        printf("\n�ֹ��� ��ǰ��? ");
        scanf("%s", search);

        if (strcmp(search, "0") == 0)   // 0�� ������ Ż��
        {
            break;
        }

        int index = find(products, size, search);       // �迭 �ִ��� �˻�

        if (index != -1)        // -1�� �ƴѰ��� ��ȯ���� ���
        {
            printf("�ֹ� ����? ");
            scanf("%d", &order);

            if (order > 0 && order <= products[index].stock) // 0���� ũ�� ���� ����� ���� ��� ó��
            {
                products[index].stock -= order;     // �ش� ��ǰ�� ����� �ֹ� ������ŭ ����
            }
        }
    }

    inventory(products, size);      // ���� ���� ���� �� ���� ��� ���
    printf("���α׷��� �����մϴ�.\n");

    return 0;
}


int main()
{
    Am11();
    return 0;
}