
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
// step1 - 2���� �迭 
// Ex) 2���� �迭�� ��� arr[2][3]={1,2,3} [0][0],[0][1],[0][2]������ ä������ �������� 0�� ��
// 2���� �迭�� �� ���ҿ� ���� ������ ���� ��ø for���� ���� ����Ѵ�.
int main()
{
	srand(time(NULL));

	int arr[3][5];
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			printf("%d ", arr[i][j]);
			if (j == 4)
				printf("\n");
			sum += arr[i][j];
		}
	}
	printf("\n");
	printf("%d", sum);
}

//step2 - 2���� �迭�� ���ڻ��
int main()
{
	char arr[5][20];

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%19s", arr[i], sizeof(arr[i])); //sizeof(arr)�� �迭 ��ü�� ũ�⸦ ��ȯ�ϱ� ������, arr[i]�� ũ�⸸�� �ʿ��Ҷ��� �������� ���� > sizeof(arr[i])���
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d %s\n", i + 1, arr[i]);
	}
}

//step3 - 3���� �迭 
int main()
{
	srand(time(NULL));
	char arr[3][4][3];
	int total = 0;
	int sum[3] = {0};

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 3; k++)
			{
				arr[i][j][k] = rand() % 100 + 1;
			}
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 3; k++)
			{
				total += arr[i][j][k];
				sum[i] += arr[i][j][k];
			}
	printf("%d %f\n", total, (double)total / (3 * 4 * 3));
	for (int i = 0; i < 3; i++)
		printf("%f ", (double)sum[i] / (3 * 4));
}
*/