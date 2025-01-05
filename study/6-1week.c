#include<stdio.h>
#include<Windows.h>

/*
void go(int x, int y)
{
	COORD pos = { x, y }; //COORD 구조체는 커서 위치를 지정하기 위해 사용되는 Windows에서 정의된 구조체이다
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
	//STD_OUTPUT_HANDLE 표준 출력 장치(콘솔)에 대한 식별자이다 > GetStdHandle 함수에 인자로 전달
	//GetStdHandle 콘솔의 출력을 제어할 수 있는 헨들을 얻는다 > 콘솔 작업을 할 수 있는 권한을 제공
	//핸들을 통해 실제로 콘솔에 텍스트를 출력하거나, 커서를 이동하는 등의 작업을 수행 

	//SetConsoleCursorPosition 핸들을 통해 콘솔 창에 대한 제어 권한을 갖고, 해당 핸들에 연결된 
	//  콘솔 창에서 커서의 위치를 변경하는 등의 작업을 할 수 있게 됨
	
	
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