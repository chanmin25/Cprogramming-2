// 구조체 변수의 선언 및 사용

#include <stdio.h>
#include <string.h>

struct contact		// 연락처
{
	char name[20];	// 이름
	char phone[20];	// 전화번호(01012345678 형식의 문자열로 저장)
	int ringtone;	// 벨 소리(0~9 선택)
};

int main(void)
{
	struct contact ct = { "김석진", "01011112222", 0 };
	struct contact ct1 = { 0 }, ct2 = { 0 };

	ct.ringtone = 5;		// ringtone 멤버를 int 변수로 사용한다.
	strcpy(ct.phone, "01011112223");	// phone 멤버를 문자 배열로 사용한다.
	printf("이    름:%s\n", ct.name);
	printf("전화번호:%s\n", ct.phone);
	printf("벨 소 리:%d\n", ct.ringtone);

	strcpy(ct1.name, "전정국");			// 구조체 변수 이름으로 누구의 멤버인지 구별한다.
	strcpy(ct1.phone, "01012345678");
	ct1.ringtone = 1;
	printf("이    름:%s\n", ct1.name);
	printf("전화번호:%s\n", ct1.phone);
	printf("벨 소 리:%d\n", ct1.ringtone);

	// ct2로 연락처 정보를 입력받는다.
	printf("이름? ");				// 구조체 변수 이름으로 누구의 멤버인지 구별한다.
	scanf("%s", ct2.name);
	printf("전화번호? ");
	scanf("%s", ct2.phone);
	printf("벨 소리(0~9)? ");
	scanf("%d", &ct2.ringtone);
	printf("이    름:%s\n", ct2.name);
	printf("전화번호:%s\n", ct2.phone);
	printf("벨 소 리:%d\n", ct2.ringtone);

	return 0;
}