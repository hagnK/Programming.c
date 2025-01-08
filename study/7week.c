#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//step1 - 1차원 배열 
/*
int main()
{
	srand(time(NULL));
	int arr[100]; // 배열을 통해 동일한 타입의 변수 여러 개를 하나의 선언만으로 사용
	int sum = 0;

	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 10 + 1; //배열 첨자 연산자 [] 내의 값을 인덱스라 하는데, 인덱스 값이 0부터 시작함을 주의

		printf("%d ", arr[i]);
	}

	for (int i = 0; i < 100; i++)
	{
		sum += arr[i];
	}
	printf("\n");
	printf("%.3f", (double)sum / 100);

}

//step2 - char 배열을 통한 문자열의 저장 

int main()
{
	char arr[20];
	char count = 0;
	                                                                                     // sizeof(arr) > 20바이트의 크기를 지정 scanf_s가 배열의 크기를 넘지 않는다
	scanf_s("%19s", arr, sizeof(arr)); //%19는 최대 19개의 문자만 읽고 마지막에 \0이 추가, sizeof(arr)는 오버플로를 방지하기 위한 입력 크기제한

	for (int i = 0; arr[i]!= '\0'; i++) //for (int i = 0; i < 20 ; i++)를 쓰면 안되는 이유 > \0문자 이후 쓰레기 값까지 탐색하여 오류 발생가능 
	{                                   //(int i = 0; arr[i]!= '\0'; i++)를 사용하면 문자열의 실제 길이에 맞게 탐색 
		if (arr[i] == 'R' || arr[i] == 'r')
		{
			count++;
		}
	}
	printf("%d", count);
}
*/