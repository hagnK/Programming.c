/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 // step 1 -  �Լ��� ����
int sum(int num1, int num2)
{
	int num3 = num1 + num2;
	return num3;
}


int main()
{
	int n1 = 2, n2 = 3;
	int sum1 = sum(n1, n2);

	printf("%d \n", sum1);
	printf("%d", sum(4, 5));
}

// step 2 - void Ÿ��
void menu()
{
	printf("************\n");
	printf("  1. ���   \n");
	printf("  2. �߰�   \n");
	printf("  3. ����   \n");
	printf("  0. ����   \n");
	printf("************\n");
}

int main()
{
	int input;
	while (1)
	{
		scanf_s("%d", &input);
		if (input == 1)
			menu();
		else if (input == 0)
			break;
		else
		
			printf("�Է¿��� \n");
	}
}

// step3 - ���� ���� ���� 
void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;

	printf("%d %d\n", num1, num2);
}

int main()
{
	int n1 = 2, n2 = 3;
	swap(n1, n2);

	printf("%d %d", n1, n2);
}

// step4 - ���������� ��������

int count = 0;  // �������� > �������� �������� ����> �Ű������� ���� �����͸� �����ϴ� ���� �ٶ����ϴ�
int sum()
{
	count++;
}

int main()
{
	for (int i = 0; i <= 10; i++) // �������� 
		sum();
	printf("%d", count);
}

// step 5 - static ���� ����
void sum()
{
	static int count = 0; //count ������ ���� 0������ �ʱ�ȭ�� ù ��° sum �Լ� ȣ�� �ÿ��� ���� ����° ���ĺ��ʹ� �ʱ�ȭ ������ ������� �ʴ´�
	count++;
	printf("%d ", count);
}

int main()
{
	for (int i = 0; i <= 10; i++)
		sum();
}

// step 6 - ����Լ� 
int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	printf("%d",fact(5));
}

// step 7 - rand �Լ��� ��� ���

int main()
{
	srand(time(NULL)); //srand �Լ��� ���� �߻��⸦ �ʱ�ȭ�ϴ� �Լ� > ���� �ø��� �ٸ� ���� ���޵� �� �ֵ��� �ý��� �ð��� ��ȯ�ϴ� time�Լ� ���
	int result = 0;

	for (int i = 0; i <= 10; i++)
	{
		int num = rand() % 10+1;  // 10 + 1 10�� 1 ������ ���� 
		result += num;
	}
	printf("%d", result);
}


int main()
{
	srand(time(NULL));

	for (int i = 0; i <= 10; i++)
	{
		float num = (rand() / (double)RAND_MAX); //0~1������ �Ǽ����� �����ϰ��� �Ѵٸ� rand()/(double)RAND_MAX
		printf("%d \n", num);
		printf("%f\n", num);
	}
}
*/