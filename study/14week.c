/*
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


//step1 - �޸� ���� �Ҵ��� �ʿ伺 

// int 5���� �����ؾ� �ȴ� > int art[5], ���� 100����? > int ary[100] 
// ���� ���α׷��� �����ϱ� ��, ���α׷� �ۼ� �ܰ迡�� int ���� �� ���� �ʿ����� �𸥴ٸ�? 
// ����ڷκ��� int ������ ������ �Է¹ް� �ش� ������ŭ�� int ���� �Է¹ް� �����϶�. 
// �� ���α׷� ���� �߿� �ʿ��� ũ���� �޸𸮸� Ȯ���� �� �ִ� ����� �ʿ��ϴ� > "�޸� ���� �Ҵ�"�̶�� �Ѵ�.

//step2 - malloc �Լ��� Ȱ���� �޸� ���� �Ҵ�
int main()
{
	srand(time(NULL));

	int count;
	scanf_s("%d", &count);

	int* p = malloc(sizeof(int)*count); // �ʿ��� �޸𸮸� �Ҵ��ϰ�, �� �ּҸ� ��ȯ�Ͽ� p�� �ּҸ� ����(int ���� ����� �޸��� �ּҸ� ����Ű�� ��)
	                                    // p�� ����Ͽ� �������� �Ҵ�� �޸� ������ �����ϰ� ���� ���� �� �ִ�
	if (p == NULL) // �޸� �Ҵ翡 ������ ���, p�� NULL�� �ȴ�. > �޸� �Ҵ��� ���θ� Ȯ�����ش�. 
		return 1;  // �޸� �Ҵ翡 �������� �� ���α׷��� ���� �����Ѵ�.

	for (int i = 0; i < count; i++)
		p[i] = rand() % 10 + 1;

	for (int i = 0; i < count; i++)
		printf("%d ", p[i]);

	free(p); // �������� �Ҵ�� �޸𸮴� �ڵ����� �������� �ʱ� ������ �ش� �޸𸮸� �����ϰ��� �ϴ� ��� free�Լ��� ���

}


//step3 - calloc �Լ��� Ȱ���� �޸� ���� �Ҵ�

//malloc �Լ��� �������� �Ҵ��� ��ü �޸� ũ�⸦ ���  > �ʱ�ȭ���� ���� �޸𸮸� �Ҵ�
//calloc �Լ��� �޸��� ���� ũ��� ������ ���� ��� > �޸𸮸� �Ҵ��ϸ�, ��� ����Ʈ�� 0���� �ʱ�ȭ

int main()
{
	int count;
	scanf_s("%d", &count);

	int* p = calloc(count, sizeof(int));
	if (p == NULL)
		return 1;
	for (int i = 0; i < count; i++)
		p[i] = rand() % 10 + 1;
	for (int i = 0; i < count; i++)
		printf("%d ", p[i]);
	free(p);
}

//step4 - reallock �Լ��� Ȱ���� �޸� ���� ���Ҵ�

// realloc �Լ��� ����Ͽ� �Ҵ� ���� �޸��� ũ�⸦ ����(or Ȯ��)�� �� �ִ�
// ���� ���� �״�� ���� �Ǹ鼭 ���� ���� ũ�� ��ŭ ���Ҵ� �� ���� �ּҸ� ��ȯ 
// realloc �Լ��� ������ �� �޸��� ���� �ּҴ� ������ ���� ���� �ְ� �ٸ� ���� �ִ�

int main()
{
	srand(time(NULL));
	int count = 10;
	int* p = malloc(sizeof(int)*count);
	if (p == NULL)
		return 1;  //���α׷� ���� ����
	for (int i = 0; i < count; i++)
		p[i] = rand() % 10 + 1;

	for (int i = 0; i < 5; i++)
	{
		count += 2;
		printf("%d ", count);                           
		int *temp = realloc(p, sizeof(int) * count); // malloc�Լ��� ���� *p�� ���� �ּҸ� ��ȯ > ���� *p�� realloc�Լ��� ����ϸ� �޸� ���Ҵ� ����
		                                             // �� �ּҸ� ��ȯ�ϴµ� ���� *p�� ����� ���� �ּҿ� �浹�� ���� ������ ��
		if (temp == NULL)                            // realloc �޸� �Ҵ翡 ������ ���� ���� ��츦 ���� �ӽ� ����Ҹ� ����� �ش�. 
		{
			free(p); //���� �޸� ���� > "���� ���� �״�� ����"
			return 1;
		}
		p = temp;
		for (int j = count - 2; j < count; j++)
			p[j] = rand() % 10 + 1;
	}
	
	for (int i = 0; i < count; i++)
	{
		printf("\n%d", p[i]);
	}
	free(p);
}
*/

//step5 - ������ Ÿ�� ����� �޸� ���� �Ҵ�

/* �޸� ���� �Ҵ��� ��
*1 int *p = malloc(sizeof(int));               // int ���� 1�� �Ҵ� 
*2 int *p = mallock(sizeof(int)*5);            // int [5]�� 1���� �迭�� ��� ����
*3 int *p = mallock(sizeof(int [5]));          //  2�� ����
*4 double *p = malloc(16);                     //  double [2]�� 1���� �迭�� ��� ����
*5 int *p = malloc(16);                        //  int [4]�� 1���� �迭�� ��� ����
*6 int (*p)[4] = malloc(sizeof(int) * 3 * 4);  //  int [3][4]�� 2���� �迭�� ��� ����
*7 int (*p)[4] = malloc(sizeof(int [4]) * 3);  //  6�� ����
*8 int (*p)[4] = malloc(sizeof(int [3][4]));   //  6�� ����
*9 int **p = malloc(sizeof(int *) * 5);       //   int *[5]�� 1���� �迭�� ��� ����

//step5.1
int sum(int *ary, int row, int col)
{
	int result = 0;
	int** p = malloc(sizeof(int*) * row); // ������ int *2��ŭ�� �޸𸮸� �����͸� ����Ű�� ������ p�� �����Ѵ�
	if (p == NULL)
		return 1;

	for (int i = 0; i < row; i++)
		p[i] = (ary + (i * col)); // p[i]�� ary�� �� �ּҸ� ����Ű�� �����μ� p[i][j]�� �迭 ������ �Ѵ�.

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			result += p[i][j];
	}
	free(p);
	return result;
}

int main()
{
	int arr1[2][3] = { {1,4}, {4,2} };
	int arr2[3][2] = { {1,2}, {4,2}, {6,2} };

	printf("%d\n", sum((int*)arr1,2,3));
	printf("%d", sum((int*)arr2,3,2));
}
*/