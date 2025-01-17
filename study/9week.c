
// 실행 중인 프로그램을 프로세스라 한다. 하나의 프로그램이 여러번 실행되면 여러 개의 프로세스가 된다.
// 프로그램을 실행되면 그 프로세스를 위한 메모리가 생성된다. 메모리는 총 4개의 영억으로 나뉜다.

//    data          stack         heap       code
// (전역 변수)   (지역변수)   (동적 변수)   (함수)
// (정적 변수)
// 변수와 함수 모두 메모리에 저장된다. 프로세스 당 메모리의 크기는 4기가바이트이다.

/*
#include<stdio.h>


// step1 - 주소 연산자(&)와 역참조 연산자(*)
int main()
{
	int num =1;
	printf("%d\n", num);
	printf("%d\n", &num);

	int* p = &num;
	printf("%d\n", p);
	printf("%d", &p);

	int *p = NULL; > 보통 어떤 변수를 가리키기 이전의 포인터 변수의 초기값으로 NULL(0) 포인터 상수값을 지정한다.
}
// step1.1
int main()
{
	int num = 3;
	int* p = &num;
	*p = 100;

	printf("%d %d %d %d %d",num, &num, &p, p, *p);
}

// step2 - 포인터 연산 
int main()
{
	int num = 3;
	int* p = &num;
	printf("%d %d, %d\n", *p,p,&num);
	p++;                                 // 포인터 변수 또는 상수에 대해서는 덧셈과 뺄셈 연산만 가능하다.
	printf("%d, %d", p, &num);

}
*/