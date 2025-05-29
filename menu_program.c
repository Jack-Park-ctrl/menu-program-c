#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int);
void print_divisor(int);

int main()
{
	while (1)
	{
		printf("\n==== 메뉴 ====\n 1. 홀짝 판별\n 2. 약수 출력\n 3. 프로그램 종료\n");
		printf("번호를 입력하시오.:");
		int number, num;
		scanf("%d", &number);

		if (number == 1)
		{
			printf("정수를 입력하시오.:");
			scanf("%d", &num);
			if (is_even(num)) printf("짝수입니다.\n");
			else printf("홀수입니다.\n");
		}
		if (number == 2)
		{
			printf("정수를 입력하시오.:");
			scanf("%d", &num);
			print_divisor(num);
		}
		if (number == 3)
		{
			printf("프로그램이 종료되었습니다.\n");
			break;
		}

	}

	return 0;
}
int is_even(int num)
{
	return (num % 2 == 0);
}
void print_divisor(int num)
{
	printf("%d의 약수", num);
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf(" %d", i);
		}
	}
}