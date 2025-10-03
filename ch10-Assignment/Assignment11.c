/*
	파일명: Assignment11 (난이도: ***)
	내용: PRODUCT 구조체 배열을 이용해서 제품명을 입력받아 검색 후 주문 처리하는 프로그램을 작성하시오. 주무 수량을 입력받아 결제 금액을
	알려주고, 제품 재고를 주문 수량만큼 감소시켜야 한다. 제품명으로 검색할 수 없거나 찾은 제품의 재고가 주문 수향보다 적으면 애러 메시지를
	출력한다. PRODUCT 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다. 
	작성자: 정찬민
	날짜: 2025.10.03
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Assignment11.h"

int find(struct PRODUCT products[], int size, char* name_to_find)   // 검색 함수
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(name_to_find, products[i].name) == 0)        // 같은지 비교
        {
            return i;       // 찾으면 i를 반환
        }
    }
    return -1;      // 못찾았으면 -1 반환
}
void inventory(struct PRODUCT products[], int size)
{
    int i;
    for (i = 0; i < size; i++)      // 각 제품 정보 출력
    {
        printf("- 제품명: %-10s | 가격: %-8d | 재고: %d\n",
            products[i].name, products[i].price, products[i].stock);
    }
}

void Am11() 
{
    struct PRODUCT products[3] =            // 미리 정해진 것 배열을 초기화 
    {
        {"아메리카노", 4000, 10},
        {"카페라떼", 4500, 10},
        {"플랫화이트", 5000, 10},
    };

    int size = 3;       // 배열 크기 
    char search[51];    // 입력을 저장할 변수
    int order;

    printf("주문을 시작합니다. (종료하려면 제품명에 '0' 입력)\n");

    while (1)           // 사용자가 0을 입력할 때까지 무한 루프 
    {
        printf("\n주문할 제품명? ");
        scanf("%s", search);

        if (strcmp(search, "0") == 0)   // 0을 받으면 탈출
        {
            break;
        }

        int index = find(products, size, search);       // 배열 있는지 검색

        if (index != -1)        // -1이 아닌값을 반환했을 경우
        {
            printf("주문 수량? ");
            scanf("%d", &order);

            if (order > 0 && order <= products[index].stock) // 0보다 크고 현재 재고보다 작을 경우 처리
            {
                products[index].stock -= order;     // 해당 제품의 재고에서 주문 수량만큼 감소
            }
        }
    }

    inventory(products, size);      // 무한 루프 종료 후 현재 재고 출력
    printf("프로그램을 종료합니다.\n");

    return 0;
}


int main()
{
    Am11();
    return 0;
}