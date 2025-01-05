/*
#include <stdio.h>
#define pi 3.14 // define 대신 const 상수 사용 가능 > const double pi = 3.14
                // 차이점 : const는 메모리를 할당받고, define은 메모리를 차지하지 않는다.

int main()
{
	
	// step 1 - 상수
	int r = 3;
	printf("%f", pi * r * r);
	
	// step 2 - 자료형 변환 
	int num1 = 5, num2 = 2; // num1,2가 int 자료형이라서 곱의 자료형(double)을 명시해줘야됨 5*2.3이 실수여서 
	double reslut = (double)num1 / num2;
	printf("%f", reslut);
	
	// step 3 - printf 함수의 활용
	printf("%f %.4f\n", 12.123456, 12.123456); 
	printf("%10d %d \n", 123456, 123456);        
	printf("%10f %10.4f \n", 12.123456, 12.123456);   // %10.4 > 10은 필드 폭, 4소수점 이하의 표기 자릿수 (뒷 자리 반올림)
	printf("%-10f %-10.4f \n", 12.123456, 12.123456);
	
	// step 4 - scanf 함수의 활용
	int num1, num2, num3;
	printf("10, 8, 16 진수 입력 : ");
	scanf_s("%d %o %x", &num1, &num2, &num3);

	printf("입력된 정수 10진수로 출력 : ");
	printf("%d %d %d", num1, num2, num3);
	
}
*/
