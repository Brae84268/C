//scanf함수 사용법 두번쨰 입니다.
#define _CRT_SECURE_NO_WARNINGS //이 문장 대신 #pragma warnings(disable: 4996) 이라고 써도 되지만 일반적으로 잘 안씀
#include <stdio.h>
int main() {

	int age; //나이를 저장할 age 변수 선언
	printf("당신의 나이는 몇살이신가요?\n");
	scanf("%d", &age);
	//scanf는 값을 변수의 주소에 저장해야 하므로 변수 앞에 &를 한다.
	printf("아~ %d살이시군요~\n", age);
	//age 변수에 있는 값을 출력! (출력할 때에도 %d를 이용)
	printf("저는 22살 입니다.\n잘부탁 드립니다!\n");

}
