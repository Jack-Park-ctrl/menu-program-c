#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int);
void print_divisor(int);

int main()
{
	while (1)
	{
		printf("\n==== �޴� ====\n 1. Ȧ¦ �Ǻ�\n 2. ��� ���\n 3. ���α׷� ����\n");
		printf("��ȣ�� �Է��Ͻÿ�.:");
		int number, num;
		scanf("%d", &number);

		if (number == 1)
		{
			printf("������ �Է��Ͻÿ�.:");
			scanf("%d", &num);
			if (is_even(num)) printf("¦���Դϴ�.\n");
			else printf("Ȧ���Դϴ�.\n");
		}
		if (number == 2)
		{
			printf("������ �Է��Ͻÿ�.:");
			scanf("%d", &num);
			print_divisor(num);
		}
		if (number == 3)
		{
			printf("���α׷��� ����Ǿ����ϴ�.\n");
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
	printf("%d�� ���", num);
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf(" %d", i);
		}
	}
}