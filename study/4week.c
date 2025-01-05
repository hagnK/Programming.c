/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 // step 1 -  함수의 기초
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

// step 2 - void 타입
void menu()
{
	printf("************\n");
	printf("  1. 출력   \n");
	printf("  2. 추가   \n");
	printf("  3. 삭제   \n");
	printf("  0. 종료   \n");
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
		
			printf("입력오류 \n");
	}
}

// step3 - 값에 의한 전달 
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

// step4 - 지역변수와 전역변수

int count = 0;  // 전역변수 > 편리하지만 가동성이 낮다> 매개변수를 통해 데이터를 전달하는 것이 바람직하다
int sum()
{
	count++;
}

int main()
{
	for (int i = 0; i <= 10; i++) // 지역변수 
		sum();
	printf("%d", count);
}

// step 5 - static 지역 변수
void sum()
{
	static int count = 0; //count 변수에 대한 0으로의 초기화는 첫 번째 sum 함수 호출 시에만 실행 두전째 이후부터는 초기화 문장이 실행되지 않는다
	count++;
	printf("%d ", count);
}

int main()
{
	for (int i = 0; i <= 10; i++)
		sum();
}

// step 6 - 재귀함수 
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

// step 7 - rand 함수의 사용 방법

int main()
{
	srand(time(NULL)); //srand 함수는 난수 발생기를 초기화하는 함수 > 실행 시마다 다른 값이 전달될 수 있도록 시스템 시간을 반환하는 time함수 사용
	int result = 0;

	for (int i = 0; i <= 10; i++)
	{
		int num = rand() % 10+1;  // 10 + 1 10과 1 사이의 숫자 
		result += num;
	}
	printf("%d", result);
}


int main()
{
	srand(time(NULL));

	for (int i = 0; i <= 10; i++)
	{
		float num = (rand() / (double)RAND_MAX); //0~1무작위 실숫값을 생성하고자 한다면 rand()/(double)RAND_MAX
		printf("%d \n", num);
		printf("%f\n", num);
	}
}
*/