/*
#include<stdio.h>	
#include<ctype.h>
#include<string.h>

//step1 - 문자 단위 입출력 함수
int main()
{
	int ch;
	// getchar()함수로 키보드에서 입력된 문자를 ascii코드로 반환하여 ch에 저장 > ctrl + z 를 입력하면 EOF 값이 반환됨. EOF 문자열 상수는 -1로 정의
	while ((ch = getchar()) != EOF) 
		putchar(ch); // putchar()함수는 ch에 저장된 ascii 코드를 문자열로 반환하여 출력한다 
}


// 이런게 있다는 것을 인지하고 있어라
int main()
{
	
	int puts(const char* s); // 문자열(s) 출력 후 자동으로 '\n' 문자 출력
	puts("hellow c");

	int fputs(const char* s, FILE * stream); //해당 문자열(s)만 출력
	fputs("hellow c\n", stdout);

	int* gets(char* s); // 엔터키 입력 전까지의 문자열(주소) 반환
	char str[30];
	gets(str);

	char* fgets(char* s, int n, FILE * stream); // 최대 (n-1)개 문자열 입력
	char str[30];
	fgets(str, sizeof(str),stdin);
}

//step2 - 문자 처리 함수
int main()
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))          // 소문자이면
			putchar(toupper(ch)); // 대문자로 반환
		else if (isupper(ch))     // 대문자이면
			putchar(isupper(ch)); // 소문자로 반환
		else if (ch == '\n')      // 줄 변환 > 출력 
			putchar(ch);
	}
}
*/

//step3 - 문자열 처리 함수 
/*

strlen 문자열의 길이(\0 제외) 반환  strlen("abcde"); // 5반환
strcpy 문자열 복사                 char dest[20], src[20]; strcpy(dest, src);
atrcat 문자열 추가                  char dest[20];  strcat(dest, "end");

추가 내용은 인터넷 등 자료 참고
*/

