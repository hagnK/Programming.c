/*
#include<stdio.h>

//step1 - ���� ����� ����
int main()
{
	FILE* fp = fopen("test.txt", "w");

	fprintf(fp, "hello c \n");
	fputc('C', fp);
	fputc('\n', fp);
	fputs("C Programming \n", fp);

	fclose(fp);
}


// ���� ó���� ���� ������ �ڷ� ��Ī���� ���� 

//step2 - �������� ���α׷��� 

#define ADD
#define MULTI(X, Y)((X)*(Y))
int main()
{ 
	printf("%d\n", MULTI(3, 4));
	printf("%d\n", MULTI(1 + 2, 3 + 4));

	int num1 = 4, num2 = 3;
#ifdef ADD // ADD�� #define�� ���� ���ǵǾ� �ִٸ� ����      #if ADD;  ADD�� ���̸�(0�� �ƴϸ�) ���� ������ ���� 
	printf("%d+%d=%d \n", num1, num2, num1 + num2);        // elif: else if�� �ǹ��̸�, #if ������ ���� ���� �ִ�
#else // ���� ��츦 �������� ���� ��� ����             #ifndef >> ADD�� #define�� ���� ���ǵǾ� ���� �ʴٸ� ����
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
#endif // #ifdef, #ifndef, #else ��ó���� �Ŀ��� �ݵ�� #endif ���� �´�
}

// �������� ���α׷����� �ʿ伺 
// ����� ����
// �����ϰ� ��ũ
// � ���� ������ ���ͳ� ���η� ��Ī 
*/