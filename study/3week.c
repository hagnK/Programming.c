/*
#include <stdio.h>

int main()
{
	
	// step 1 - while문
	int num = 1;
	int result = 0;
	while (num <= 100)
	{
		printf("%d ", num);
		result = result + num; // result += num; 으로 표현가능 
		
		num++; // num 변수를 1씩 증가
	}
	printf("합산된 값 : %d", result);
	
	// step 2 - do ~ while 문
	int num = 0;
	int result = 0;
	do {
		num++;
		result += num;
		printf("%d ", num);
	} while (num <= 100);
	printf("%d ", result);
	
	// step3 - for문
	int result = 0; // for문은 초기식, 조건식, 증감식으로 구성; 초기식 > 조건식 실행하여 참이면 블록 내의 문장 실행 > 증감식 실행
	for (int num = 1; num <= 100; num++) 
	{
		printf("%d ", num);
		result += num;
	}
	printf("%d", result);
	
	// step 4 - if문
	int num;
	scanf_s("%d", &num);
	if (num > 0)
	{
		printf("양수");
	}
	
	// step 5 - if ~ else문
	int num = 0;
	scanf_s("%d", &num);
	if (num > 0)
		printf("양수");
	else {
		if (num == 0)
			printf("0");
		else 
			printf("음수");
	}
	return 0;
	
	// step 6 - if ~ else if ~ else

	int num;
	scanf_s("%d", &num);
	if (num > 0)
		printf("양수");
	else if (num == 0)
		printf("0");
	else 
		printf("음수");
	
	// step 7 - switch문 
	int num;
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		printf("양수");
		break;
	case 0:
		printf("0");
		break;
	case -1:
		printf("음수");
		break;
	default :
		printf("입력 오류");
		break;
	}
    
	//continue 문
	int result = 0;
	for (int num = 1; num <= 100; num++)
	{
		if (num % 15 == 0 || num % 25 == 0)
			continue;  //continue문이 실행되면 해당 반복문 내의 이후 문장이 실행되지 않으며 바로 반복문의 시작 위치로 이동한다
		result += num;
		
	}
	printf("%d", result);
	
	//break문
	int result = 0;

	for (int num = 1; num <= 1000; num++)
	{
		result += num;
		if (num % 15 == 0 && num % 25 == 0)
			break;   //break문이 실행되면 해당 반복문을 탈출하여 반복문 다음 문장으로 넘어간다
	}
	printf("%d", result);
}
*/