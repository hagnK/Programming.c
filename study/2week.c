/*
#include <stdio.h>
#define pi 3.14 // define ��� const ��� ��� ���� > const double pi = 3.14
                // ������ : const�� �޸𸮸� �Ҵ�ް�, define�� �޸𸮸� �������� �ʴ´�.

int main()
{
	
	// step 1 - ���
	int r = 3;
	printf("%f", pi * r * r);
	
	// step 2 - �ڷ��� ��ȯ 
	int num1 = 5, num2 = 2; // num1,2�� int �ڷ����̶� ���� �ڷ���(double)�� �������ߵ� 5*2.3�� �Ǽ����� 
	double reslut = (double)num1 / num2;
	printf("%f", reslut);
	
	// step 3 - printf �Լ��� Ȱ��
	printf("%f %.4f\n", 12.123456, 12.123456); 
	printf("%10d %d \n", 123456, 123456);        
	printf("%10f %10.4f \n", 12.123456, 12.123456);   // %10.4 > 10�� �ʵ� ��, 4�Ҽ��� ������ ǥ�� �ڸ��� (�� �ڸ� �ݿø�)
	printf("%-10f %-10.4f \n", 12.123456, 12.123456);
	
	// step 4 - scanf �Լ��� Ȱ��
	int num1, num2, num3;
	printf("10, 8, 16 ���� �Է� : ");
	scanf_s("%d %o %x", &num1, &num2, &num3);

	printf("�Էµ� ���� 10������ ��� : ");
	printf("%d %d %d", num1, num2, num3);
	
}
*/
