/*
#include<stdio.h>

//step1 - 파일 입출력 구조
int main()
{
	FILE* fp = fopen("test.txt", "w");

	fprintf(fp, "hello c \n");
	fputc('C', fp);
	fputc('\n', fp);
	fputs("C Programming \n", fp);

	fclose(fp);
}


// 파일 처리에 대한 내용은 자료 서칭으로 공부 

//step2 - 다중파일 프로그래밍 

#define ADD
#define MULTI(X, Y)((X)*(Y))
int main()
{ 
	printf("%d\n", MULTI(3, 4));
	printf("%d\n", MULTI(1 + 2, 3 + 4));

	int num1 = 4, num2 = 3;
#ifdef ADD // ADD가 #define에 의해 정의되어 있다면 포함      #if ADD;  ADD이 참이면(0이 아니면) 이후 문장이 포함 
	printf("%d+%d=%d \n", num1, num2, num1 + num2);        // elif: else if의 의미이며, #if 다음에 나올 수도 있다
#else // 위의 경우를 만족하지 않을 경우 포함             #ifndef >> ADD가 #define에 의해 정의되어 있지 않다면 포함
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
#endif // #ifdef, #ifndef, #else 전처리문 후에는 반드시 #endif 문이 온다
}

// 다중파일 프로그래밍의 필요성 
// 선언과 정의
// 컴파일과 링크
// 등에 대한 내용은 인터넷 공부로 서칭 
*/