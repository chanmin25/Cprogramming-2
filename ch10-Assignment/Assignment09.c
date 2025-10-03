/*
	파일명: Assignment09 (난이도: **)
	내용: PRODUCT 구조체를 매개변수로 전달받아 주문 처리를 하는 order 함수를 정의하시오. order 함수는 PRODUCT 구조체와 주문 수량을 매개변수로 전달받는 
	함수이다 . 재고가 주문 수량보다 적으면 주문할 수 없으므로 0을 리턴하고 , 재고가 주문 수량보다 많으면 주문 수량만큼 재고를 감소시키고
	결제 금액을 리턴한다. 주문 수량으로 0이 입력될 때까지 반복해서  주문 처리를 하는 프로그램을 작성하시오. 
	작성자: 정찬민
	날짜: 2025.10.03
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment09.h"

int od(struct PRODUCT* p, int quantity);

void Am09()
{
	struct PRODUCT my_product;
	int order;

	printf("제품명? ");
	scanf("%s", my_product.name);

	printf("가격? ");
	scanf("%d", &my_product.price);

	printf("재고? ");
	scanf("%d", &my_product.stock);

	while (1)
	{
		printf("\n상품: %s | 가격: %d원 | 현재 재고: %d개\n", my_product.name, my_product.price, my_product.stock);
		printf("주문 수량? (0 입력 시 종료): ");
		scanf("%d", &order);

		if (order == 0)
		{
			break;
		}

		int pay = od(&my_product, order);

		if (pay > 0)
		{
			printf("결제 금액: %d원 재고: %d개 \n", pay, my_product.stock);
		}
		else
		{
			printf("재고가 부족합니다. \n");
		}
	}

	printf("\n 프로그램을 종료합니다.\n");
}

int od(struct PRODUCT* p, int quantity)
{
	if (p->stock < quantity)
	{
		return 0;
	}
	else
	{
		p->stock -= quantity;
		return p->price * quantity;
	}
}


int main()
{
	Am09();
	return 0;
}