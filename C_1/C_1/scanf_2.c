//scanf�Լ� ���� �ι��� �Դϴ�.
#define _CRT_SECURE_NO_WARNINGS //�� ���� ��� #pragma warnings(disable: 4996) �̶�� �ᵵ ������ �Ϲ������� �� �Ⱦ�
#include <stdio.h>
int main() {

	int age; //���̸� ������ age ���� ����
	printf("����� ���̴� ����̽Ű���?\n");
	scanf("%d", &age);
	//scanf�� ���� ������ �ּҿ� �����ؾ� �ϹǷ� ���� �տ� &�� �Ѵ�.
	printf("��~ %d���̽ñ���~\n", age);
	//age ������ �ִ� ���� ���! (����� ������ %d�� �̿�)
	printf("���� 22�� �Դϴ�.\n�ߺ�Ź �帳�ϴ�!\n");

}
