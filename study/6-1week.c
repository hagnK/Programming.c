#include<stdio.h>
#include<Windows.h>

/*
void go(int x, int y)
{
	COORD pos = { x, y }; //COORD ����ü�� Ŀ�� ��ġ�� �����ϱ� ���� ���Ǵ� Windows���� ���ǵ� ����ü�̴�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
	//STD_OUTPUT_HANDLE ǥ�� ��� ��ġ(�ܼ�)�� ���� �ĺ����̴� > GetStdHandle �Լ��� ���ڷ� ����
	//GetStdHandle �ܼ��� ����� ������ �� �ִ� ����� ��´� > �ܼ� �۾��� �� �� �ִ� ������ ����
	//�ڵ��� ���� ������ �ֿܼ� �ؽ�Ʈ�� ����ϰų�, Ŀ���� �̵��ϴ� ���� �۾��� ���� 

	//SetConsoleCursorPosition �ڵ��� ���� �ܼ� â�� ���� ���� ������ ����, �ش� �ڵ鿡 ����� 
	//  �ܼ� â���� Ŀ���� ��ġ�� �����ϴ� ���� �۾��� �� �� �ְ� ��
	
	
}

int main()
{
	int x, y;

	scanf_s("%d %d", &x, &y);
	go(x, y);
	printf("*");
}
*/

void Visible(int visible)
{
	CONSOLE_CURSOR_INFO ci = { 1,visible };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ci);
}

int main(void)
{
	Visible(1);
	printf("test \n");
	Sleep(2000);
	Visible(0);
	printf("test \n");
	Sleep(2000);

}