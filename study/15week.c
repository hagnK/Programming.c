/*
#include<stdio.h>	
#include<ctype.h>
#include<string.h>

//step1 - ���� ���� ����� �Լ�
int main()
{
	int ch;
	// getchar()�Լ��� Ű���忡�� �Էµ� ���ڸ� ascii�ڵ�� ��ȯ�Ͽ� ch�� ���� > ctrl + z �� �Է��ϸ� EOF ���� ��ȯ��. EOF ���ڿ� ����� -1�� ����
	while ((ch = getchar()) != EOF) 
		putchar(ch); // putchar()�Լ��� ch�� ����� ascii �ڵ带 ���ڿ��� ��ȯ�Ͽ� ����Ѵ� 
}


// �̷��� �ִٴ� ���� �����ϰ� �־��
int main()
{
	
	int puts(const char* s); // ���ڿ�(s) ��� �� �ڵ����� '\n' ���� ���
	puts("hellow c");

	int fputs(const char* s, FILE * stream); //�ش� ���ڿ�(s)�� ���
	fputs("hellow c\n", stdout);

	int* gets(char* s); // ����Ű �Է� �������� ���ڿ�(�ּ�) ��ȯ
	char str[30];
	gets(str);

	char* fgets(char* s, int n, FILE * stream); // �ִ� (n-1)�� ���ڿ� �Է�
	char str[30];
	fgets(str, sizeof(str),stdin);
}

//step2 - ���� ó�� �Լ�
int main()
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))          // �ҹ����̸�
			putchar(toupper(ch)); // �빮�ڷ� ��ȯ
		else if (isupper(ch))     // �빮���̸�
			putchar(isupper(ch)); // �ҹ��ڷ� ��ȯ
		else if (ch == '\n')      // �� ��ȯ > ��� 
			putchar(ch);
	}
}
*/

//step3 - ���ڿ� ó�� �Լ� 
/*

strlen ���ڿ��� ����(\0 ����) ��ȯ  strlen("abcde"); // 5��ȯ
strcpy ���ڿ� ����                 char dest[20], src[20]; strcpy(dest, src);
atrcat ���ڿ� �߰�                  char dest[20];  strcat(dest, "end");

�߰� ������ ���ͳ� �� �ڷ� ����
*/

