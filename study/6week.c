/*
#include<stdio.h>
#include<conio.h>

#define KEY_ESC 27
#define KEY_UP (256 + 72)
#define KEY_DOWN (256 + 80)
#define KEY_LEFT (256 + 75)
#define KEY_RIGHT (256 + 77)

int Getkey()
{
	int ch = _getch();

	if (ch == 0 || ch == 224)
	{
		ch = 256 + _getch();
	}
	return ch;
}

int main()
{
	int ch;

	while ((ch=Getkey()) != KEY_ESC)
	{
		switch (ch)
		{
		case KEY_DOWN:
			printf("[DOWN] \n");
			break;
		case KEY_LEFT:
			printf("[LEFT] \n");
			break;
		case KEY_RIGHT:
			printf("[RIGHT] \n");
			break;
		case KEY_UP:
			printf("[UP] \n");
			break;
		}
	}

}
*/

