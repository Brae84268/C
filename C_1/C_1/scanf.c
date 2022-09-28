#define _CRT_SECURE_NO_WARNINGS //입력함수 scanf()함수를 사용할 때 발생하는 에러를 무시하기 위해 사용
#include <stdio.h>
int main() { 

	int age; //나이를 저장할 age 변수 선언
	// int는 정수형 자료형이며, 대표적인 자료형으로 double(실수형), char(문자) 등이 있다.
	printf("당신의 나이는 몇살이신가요?\n");
	scanf("%d", &age); 
	//변수 age의 자료형은 정수형 이므로 십진수를 나타내는 %d를 이용한다
	//십진법을 나타내는 decimal의 약자이다.
	//scanf는 값을 변수의 주소에 저장해야 하므로 변수 앞에 &를 한다.
	printf("아 그렇군요! 저는 22살 입니다.\n잘부탁 드립니다!\n");

}
