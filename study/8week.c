
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
// step1 - 2차원 배열 
// Ex) 2차원 배열의 경우 arr[2][3]={1,2,3} [0][0],[0][1],[0][2]순으로 채워지며 나머지는 0이 됨
// 2차원 배열은 각 원소에 대한 접근을 위해 중첩 for문을 많이 사용한다.
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

//step2 - 2차원 배열의 문자사용
int main()
{
	char arr[5][20];

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%19s", arr[i], sizeof(arr[i])); //sizeof(arr)는 배열 전체의 크기를 반환하기 때문에, arr[i]의 크기만을 필요할때는 적절하지 않음 > sizeof(arr[i])사용
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d %s\n", i + 1, arr[i]);
	}
}

//step3 - 3차원 배열 
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