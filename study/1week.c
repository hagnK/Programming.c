/*
#include <stdio.h>

int main(void)
{
	// step 1 - 입출력 
	
	int num1;

	double num2;

	scanf_s("%d %lf", &num1, &num2); 
	printf("%d + %f = %f", num1, num2, num1 + num2);
	

	// step 2 - 8, 10, 12 진수의 관계
	int num1 = 10, num2 = 0xA, num3 = 012; // 정수값 표현 시 16진수는 0x 접두사를 붙이고 8진수는 0접두사를 붙인다.

	printf("%d %o %x \n", num1, num1, num1); //%o 8진수, %x 16진수 
	printf("%d %o %x \n", num2, num2, num2);
	printf("%d %o %x \n", num3, num3, num3);
	
	
	// step 3 - 문자의 표현 방식
	char ch1 = 'A', ch2 = 65; //하나의 문자는 ''료 표시, 서식문자로 %c 
	int ch3 = 'A', ch4 = 65;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	
	// step 4 - 문자열의 표현 방식 

	printf("%d %s", 1234, "dfjlksajf");
	printf("%f %s", 123.0, "dfjlksajf");
} 
*/