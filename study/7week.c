#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//step1 - 1���� �迭 
/*
int main()
{
	srand(time(NULL));
	int arr[100]; // �迭�� ���� ������ Ÿ���� ���� ���� ���� �ϳ��� �������� ���
	int sum = 0;

	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 10 + 1; //�迭 ÷�� ������ [] ���� ���� �ε����� �ϴµ�, �ε��� ���� 0���� �������� ����

		printf("%d ", arr[i]);
	}

	for (int i = 0; i < 100; i++)
	{
		sum += arr[i];
	}
	printf("\n");
	printf("%.3f", (double)sum / 100);

}

//step2 - char �迭�� ���� ���ڿ��� ���� 

int main()
{
	char arr[20];
	char count = 0;
	                                                                                     // sizeof(arr) > 20����Ʈ�� ũ�⸦ ���� scanf_s�� �迭�� ũ�⸦ ���� �ʴ´�
	scanf_s("%19s", arr, sizeof(arr)); //%19�� �ִ� 19���� ���ڸ� �а� �������� \0�� �߰�, sizeof(arr)�� �����÷θ� �����ϱ� ���� �Է� ũ������

	for (int i = 0; arr[i]!= '\0'; i++) //for (int i = 0; i < 20 ; i++)�� ���� �ȵǴ� ���� > \0���� ���� ������ ������ Ž���Ͽ� ���� �߻����� 
	{                                   //(int i = 0; arr[i]!= '\0'; i++)�� ����ϸ� ���ڿ��� ���� ���̿� �°� Ž�� 
		if (arr[i] == 'R' || arr[i] == 'r')
		{
			count++;
		}
	}
	printf("%d", count);
}
*/