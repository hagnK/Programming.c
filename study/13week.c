/*
#include<stdio.h>

//step1 - �Լ� ������ 

int sum(int x, int y)
{
	// �Լ��� �޸𸮿� ����Ǳ� ������ �Լ� ������ ������ ���� �Լ��� ���� �ּҸ� ������ �� �ִ�
	return x + y;
}
int main()
{
	int (*p)(int, int); // p�� �ΰ��� int ������ �ް� int�� ��ȯ�ϴ� �Լ��� ���� �ּҸ� ����Ű�� ������ 
	p = sum;            // ������ ���� p�� int sum(int, int)�� ������ ������ �Լ��̴�

	printf("%d \n", sum(3, 4));
	printf("%d", p(3, 4));
}

//step2 - void ������
//void* ������ �ٸ� ������ Ÿ������ �Ѿ�� ���� �߰� Ÿ������ ���� �� �ִ�.
void print(void *p, int type)
{
	if (type == 1)
	{
		// void* Ÿ�԰� �ٸ� ������ Ÿ�� ���̿��� �ڵ� ����ȯ�� �̷������.
		int* p1 = p;
		printf("%d \n", *p1);
	}
	else if (type == 2)
	{
		double* p2 = p;
		printf("%.4f", *p2);
	}
}

int main()
{
	int num1 = 100;
	double num2 = 3.1415;

	print(&num1, 1);
	print(&num2, 2);
}
*/