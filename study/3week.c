/*
#include <stdio.h>

int main()
{
	
	// step 1 - while��
	int num = 1;
	int result = 0;
	while (num <= 100)
	{
		printf("%d ", num);
		result = result + num; // result += num; ���� ǥ������ 
		
		num++; // num ������ 1�� ����
	}
	printf("�ջ�� �� : %d", result);
	
	// step 2 - do ~ while ��
	int num = 0;
	int result = 0;
	do {
		num++;
		result += num;
		printf("%d ", num);
	} while (num <= 100);
	printf("%d ", result);
	
	// step3 - for��
	int result = 0; // for���� �ʱ��, ���ǽ�, ���������� ����; �ʱ�� > ���ǽ� �����Ͽ� ���̸� ��� ���� ���� ���� > ������ ����
	for (int num = 1; num <= 100; num++) 
	{
		printf("%d ", num);
		result += num;
	}
	printf("%d", result);
	
	// step 4 - if��
	int num;
	scanf_s("%d", &num);
	if (num > 0)
	{
		printf("���");
	}
	
	// step 5 - if ~ else��
	int num = 0;
	scanf_s("%d", &num);
	if (num > 0)
		printf("���");
	else {
		if (num == 0)
			printf("0");
		else 
			printf("����");
	}
	return 0;
	
	// step 6 - if ~ else if ~ else

	int num;
	scanf_s("%d", &num);
	if (num > 0)
		printf("���");
	else if (num == 0)
		printf("0");
	else 
		printf("����");
	
	// step 7 - switch�� 
	int num;
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		printf("���");
		break;
	case 0:
		printf("0");
		break;
	case -1:
		printf("����");
		break;
	default :
		printf("�Է� ����");
		break;
	}
    
	//continue ��
	int result = 0;
	for (int num = 1; num <= 100; num++)
	{
		if (num % 15 == 0 || num % 25 == 0)
			continue;  //continue���� ����Ǹ� �ش� �ݺ��� ���� ���� ������ ������� ������ �ٷ� �ݺ����� ���� ��ġ�� �̵��Ѵ�
		result += num;
		
	}
	printf("%d", result);
	
	//break��
	int result = 0;

	for (int num = 1; num <= 1000; num++)
	{
		result += num;
		if (num % 15 == 0 && num % 25 == 0)
			break;   //break���� ����Ǹ� �ش� �ݺ����� Ż���Ͽ� �ݺ��� ���� �������� �Ѿ��
	}
	printf("%d", result);
}
*/