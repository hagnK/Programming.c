/*
#include<stdio.h>

//step1 - 함수 포인터 

int sum(int x, int y)
{
	// 함수도 메모리에 저장되기 때문에 함수 포인터 변수를 통해 함수의 시작 주소를 저장할 수 있다
	return x + y;
}
int main()
{
	int (*p)(int, int); // p는 두개의 int 변수를 받고 int를 반환하는 함수의 시작 주소를 가르키는 포인터 
	p = sum;            // 포인터 변수 p는 int sum(int, int)와 동일한 형태의 함수이다

	printf("%d \n", sum(3, 4));
	printf("%d", p(3, 4));
}

//step2 - void 포인터
//void* 변수는 다른 포인터 타입으로 넘어가기 위한 중간 타입으로 사용될 수 있다.
void print(void *p, int type)
{
	if (type == 1)
	{
		// void* 타입과 다른 포인터 타입 사이에는 자동 형변환이 이루어진다.
		int* p1 = p;
		printf("%d \n", *p1);
	}
	else if (type == 2)
	{
		double* p2 = p;
		printf("%.4f", *p2);
	}
}

int main()
{
	int num1 = 100;
	double num2 = 3.1415;

	print(&num1, 1);
	print(&num2, 2);
}
*/