/*
#include<stdio.h>

//step1 - 포인터 변수에 대한 포인터 
// 포인터 변수 또한 변수 > 주소 연산자를 통해 포인터 변수의 시작 주소를 알 수 있다
int main()
{
	int num;
	int* p1 = &num;
	int** p2 = &p1;  //int** 변수를 포인터 변수에 대한 포인터 또는 더블 포인터(이중 포인터)라고 한다
	**p2 = 100;
	printf("%d", num);
	
}

//step1.1

int num1 = 100, num2 = 200;

int change(int **pp) //더블 포인터는 포인터 변수의 주소를 저장할 때 사용 
{
	if (*pp == &num1)
		*pp = &num2;
	else
		**pp = &num1;
}

int main()
{
	int* p = &num1;
	change(&p);
	printf("%d", *p);
}
*/
//step2 - 다중 포인터

// 더블 포인터 또한 변수임으로 메모리를 차지하고, 주소 연산자를 사용해 더블 포인터 변수의 시작 주소를 알 수도 있으며 int*** 변수에 저장할 수도 있다

//int num; int *p1 = &num; *p1 = 100; > num = 100;과 동일
//int **p2 = &p1; **p2 = 200; > num = 200;과 동일
//int ***p3 = &p2; ***p3 = 300; > num = 300;과 동일 

// int*** 변수를 삼중 포인터라 하며 이중 포인터 이상의 포인터를 다중 포인터라 한다 .