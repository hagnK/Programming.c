/*
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


//step1 - 메모리 동적 할당의 필요성 

// int 5개를 저장해야 된다 > int art[5], 만약 100개면? > int ary[100] 
// 만약 프로그램을 실행하기 전, 프로그램 작성 단계에서 int 변수 몇 개가 필요한지 모른다면? 
// 사용자로부터 int 변수의 개수를 입력받고 해당 개수만큼의 int 값을 입력받고 저장하라. 
// 즉 프로그램 실행 중에 필요한 크기의 메모리를 확보할 수 있는 방법이 필요하다 > "메모리 동적 할당"이라고 한다.

//step2 - malloc 함수를 활용한 메모리 동적 할당
int main()
{
	srand(time(NULL));

	int count;
	scanf_s("%d", &count);

	int* p = malloc(sizeof(int)*count); // 필요한 메모리를 할당하고, 그 주소를 반환하여 p는 주소를 저장(int 값이 저장될 메모리의 주소를 가리키는 값)
	                                    // p를 사용하여 동적으로 할당된 메모리 공간에 접근하고 값을 읽을 수 있다
	if (p == NULL) // 메모리 할당에 실패한 경우, p는 NULL이 된다. > 메모리 할당의 여부를 확인해준다. 
		return 1;  // 메모리 할당에 실패했을 때 프로그램을 강제 종료한다.

	for (int i = 0; i < count; i++)
		p[i] = rand() % 10 + 1;

	for (int i = 0; i < count; i++)
		printf("%d ", p[i]);

	free(p); // 동적으로 할당된 메모리는 자동으로 해제되지 않기 때문에 해당 메모리를 해제하고자 하는 경우 free함수를 사용

}


//step3 - calloc 함수를 활용한 메모리 동적 할당

//malloc 함수는 동적으로 할당할 전체 메모리 크기를 기술  > 초기화되지 않은 메모리를 할당
//calloc 함수는 메모리의 단위 크기와 개수를 따로 기술 > 메모리를 할당하며, 모든 바이트를 0으로 초기화

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

//step4 - reallock 함수를 활용한 메모리 동적 재할당

// realloc 함수를 사용하여 할당 받은 메모리의 크기를 조정(or 확대)할 수 있다
// 기존 값은 그대로 복사 되면서 전달 받은 크기 만큼 재할당 후 시작 주소를 반환 
// realloc 함수를 실행한 후 메모리의 시작 주소는 이전과 같을 수도 있고 다를 수도 있다

int main()
{
	srand(time(NULL));
	int count = 10;
	int* p = malloc(sizeof(int)*count);
	if (p == NULL)
		return 1;  //프로그램 강제 종료
	for (int i = 0; i < count; i++)
		p[i] = rand() % 10 + 1;

	for (int i = 0; i < 5; i++)
	{
		count += 2;
		printf("%d ", count);                           
		int *temp = realloc(p, sizeof(int) * count); // malloc함수를 통해 *p에 시작 주소를 반환 > 만약 *p에 realloc함수를 사용하면 메모리 재할당 후의
		                                             // 새 주소를 반환하는데 원래 *p에 저장된 시작 주소와 충돌이 생겨 문제가 됨
		if (temp == NULL)                            // realloc 메모리 할당에 실패할 경우와 위의 경우를 위해 임시 저장소를 만들어 준다. 
		{
			free(p); //기존 메모리 해제 > "기존 값은 그대로 복사"
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

//step5 - 복잡한 타입 기반의 메모리 동적 할당

/* 메모리 동적 할당의 예
*1 int *p = malloc(sizeof(int));               // int 변수 1개 할당 
*2 int *p = mallock(sizeof(int)*5);            // int [5]의 1차원 배열로 사용 가능
*3 int *p = mallock(sizeof(int [5]));          //  2와 동일
*4 double *p = malloc(16);                     //  double [2]의 1차원 배열로 사용 가능
*5 int *p = malloc(16);                        //  int [4]의 1차원 배열로 사용 가능
*6 int (*p)[4] = malloc(sizeof(int) * 3 * 4);  //  int [3][4]의 2차원 배열로 사용 가능
*7 int (*p)[4] = malloc(sizeof(int [4]) * 3);  //  6과 동일
*8 int (*p)[4] = malloc(sizeof(int [3][4]));   //  6과 동일
*9 int **p = malloc(sizeof(int *) * 5);       //   int *[5]의 1차원 배열로 사용 가능

//step5.1
int sum(int *ary, int row, int col)
{
	int result = 0;
	int** p = malloc(sizeof(int*) * row); // 포인터 int *2만큼의 메모리를 포인터를 가르키는 포인터 p가 저장한다
	if (p == NULL)
		return 1;

	for (int i = 0; i < row; i++)
		p[i] = (ary + (i * col)); // p[i]가 ary의 행 주소를 가르키게 됨으로서 p[i][j]로 배열 접근을 한다.

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