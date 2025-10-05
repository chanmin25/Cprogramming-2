// 구조체 포인터의 활용

#include <stdio.h>
#include <string.h>

#define STR_SIZE 20

typedef struct contact
{
	char name[STR_SIZE];
	char phone[STR_SIZE];
	int ringtone;
} CONTACT;

int main(void)
{
	CONTACT arr[] = {	
		{"김석진","01011112222", 0},
		{"전정국","01012345678", 1},
		{"박지민","01077778888", 2},
		{"김남준","01098765432", 9},
		{"민윤기","01011335577", 5},
		{"정호석","01024682468", 7},
		{"김태형","01099991111", 3}
	};
	int size = sizeof(arr) / sizeof(arr[0]);	
	int i;
	char name[STR_SIZE];	
	int index;
	CONTACT* recent = NULL;			// CONTACT 구조체 포인터 

	while (1)
	{
		printf("이름(. 입력 시 종료)? ");
		scanf("%s", name);
		if (strcmp(name, ".") == 0)		// name이 "."이면 while 탈출
			break;

		index = -1;	
		for (i = 0; i < size; i++)
		{
			if (strcmp(arr[i].name, name) == 0)
			{
				index = i;
				break;
			}
		}
		if (index >= 0)		// 검색 성공
		{
			printf("%s의 전화번호 %s로 전화를 겁니다...\n",
				arr[index].name, arr[index].phone);
			recent = &arr[index];		// recent는 찾은 CONTACT 구조체 배열의 원소를 가리킨다.
		}
		else	// 검색 실패 시 recent는 널 포인터
		{
			printf("연락처를 찾을 수 없습니다.\n");
		}
	}
	if (recent)		// recent가 NULL이 아니면 최근 통화 연락처를 출력한다.
		printf("최근 통화: %s %s\n", recent->name, recent->phone);

	return 0;
}
