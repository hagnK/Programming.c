/*
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>

int main()
{
	
	// step 1 - ���� �Լ�
	double num;

	printf("1���� �Ǽ� ");
	scanf_s("%lf", &num);

	printf("���� : %-10.6f \n", fabs(num));
	printf("�ݿø��� : %-10.6f \n", round(num));
	printf("sin�� : %-10.6f \n", sin(num));
	printf("log�� : %-10.6f \n", log(num));  
	printf("3�� �� : %-10.6f \n", pow(num,3));

	// step 2 - system �Լ�

	for (int i = 10; i >= 0; i--)
	{
		system("cls");
		printf("%d", i);
		Sleep(1000); // 1000�и���(1��) ���� ���� ����
	}
	
	// step 3 - clock �Լ�

	//clock_t Ÿ���� CPU �ð��� ��Ÿ���µ� ��� > ���������� �ý����� Ŭ�� ƽ(clock tick)�� ���� >��� � ü���� ���� �ٸ�
   // clock() �Լ��� ���α׷��� ���� �� ���� ����� CPU �ð��� ��ȯ > ��ȯ���� clock_t Ÿ���� ������, "Ŭ�� ƽ" ������ ǥ��
	
	clock_t initial_clock = clock(); //�ʱ� clock
	int i = 11;

	while (i > 0)
	{
		clock_t current_clock = clock(); //���� clock 
		if (current_clock - initial_clock >= 1000)
		{
			i--;
			system("cls");
			printf("%d", i);
			initial_clock = clock();
		}
	}
	// step 3-1  Ÿ�̸� 
	clock_t start = clock();
	for (;;)
	{
		clock_t end = clock();
		double time =(end - start) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC �� ������ ��ȯ > �� �ʴ� Ŭ�� ƽ�� ������ ���� 
		printf("%0.3f \n", time);
		system("cls");
	} 
	
	// step 4 - _kbhit�Լ��� _getch�Լ�
	clock_t initial_clock = clock(); //
	int i = 1;
	int go = 1;

	system("cls");
	printf("%d", i);

	while (i < 100)
	{
		if (go == 1)
		{
			clock_t current_clock = clock();
			if (current_clock - initial_clock >= 1000)
			{
				i++;
				system("cls");
				printf("%d", i);
				initial_clock = clock();
			}
		}
		if (_kbhit()) // �ܼ� �Է� ���ۿ� Ű���� �Է��� �ִ��� Ȯ���ϴ� �Լ�
		{
			if (_getch() == 'p') //�ֿܼ��� ��� �Էµ� Ű ���� ��ȯ(ASCII)
				go = (go + 1) % 2;
		}
	}
}
*/