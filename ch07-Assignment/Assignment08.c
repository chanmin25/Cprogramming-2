/* 
	파일명: Assignment08
	 내용: 상품 가격이 저장된 정수형 배열에 대하여 할인율을 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하시오, 상품 가격이
	 저장된 배열의 크기는 5이고, 상품 가격은 입력받아서 사용한다. 할인된 가격은 별도의 배열에 저장해야 한다.
	 작성자: 정찬민
	 날짜: 2025.9.23
	 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am08()
{
	int original[5];
	double discount_price[5];
	double discount;
	int i;

	printf("상품가 5개를 입력하세요: \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &original[i]);
	}

	printf("할인율(%)? ");
	scanf("%lf", &discount);

	for (i = 0; i < 5; i++)
	{
		discount_price[i] = original[i] * (1 - discount / 100.0);
	}
	for (i = 0; i < 5; i++)
	{
		printf("가격: %d원 --> 할인가: %.1lf원\n", original[i], discount_price[i]);
	}


}

int main()
{
	Am08();
	return 0;
}