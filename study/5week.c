/*
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>

int main()
{
	
	// step 1 - 수학 함수
	double num;

	printf("1개의 실수 ");
	scanf_s("%lf", &num);

	printf("절댓값 : %-10.6f \n", fabs(num));
	printf("반올림값 : %-10.6f \n", round(num));
	printf("sin값 : %-10.6f \n", sin(num));
	printf("log값 : %-10.6f \n", log(num));  
	printf("3승 값 : %-10.6f \n", pow(num,3));

	// step 2 - system 함수
 
        system("mode CON: COLS=10 LINES=5"); //도스창 크기의 변경 
	
	for (int i = 10; i >= 0; i--)
	{
		system("cls");
		printf("%d", i);
		Sleep(1000); // 1000밀리초(1초) 동안 실행 멈춤
	}
	
	// step 3 - clock 함수

	//clock_t 타입은 CPU 시간을 나타나는데 사용 > 내부적으로 시스템의 클록 틱(clock tick)을 저장 >대신 운영 체제에 따라 다름
   // clock() 함수는 프로그램이 시작 된 이후 경과한 CPU 시간을 반환 > 반환값은 clock_t 타입의 값으로, "클록 틱" 단위로 표현
	
	clock_t initial_clock = clock(); //초기 clock
	int i = 11;

	while (i > 0)
	{
		clock_t current_clock = clock(); //현재 clock 
		if (current_clock - initial_clock >= 1000)
		{
			i--;
			system("cls");
			printf("%d", i);
			initial_clock = clock();
		}
	}
	// step 3-1  타이머 
	clock_t start = clock();
	for (;;)
	{
		clock_t end = clock();
		double time =(end - start) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC 초 단위로 변환 > 즉 초당 클록 틱의 개수를 정의 
		printf("%0.3f \n", time);
		system("cls");
	} 
	
	// step 4 - _kbhit함수와 _getch함수
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
		if (_kbhit()) // 콘솔 입력 버퍼에 키보드 입력이 있는지 확인하는 함수
		{
			if (_getch() == 'p') //콘솔에서 즉시 입력된 키 값을 반환(ASCII)
				go = (go + 1) % 2;
		}
	}
}
*/
