/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//step1 - 구조체의 필요성

구조체는 int와 같은 타입(자료형)을 새로 만드는 것이다
struct Point
{
    int x;
    int y;
};

어떤 타입이든 관계없이 기존 타입의 변수들이 올 수 있다.
즉 구조체는 새로운 타입을 만드는 것이다.

구조체는 int와 같이 사용하면 된다.
-변수를 만들 수 있고, 변수 선언 시 초기화도 가능하다.
-1차원 배열을 만들어 사용할 수 있고, 2차원 배열 등 다차원 배열도 만들 수 있다.
-변수 사이의 대입도 된다.
-포인터 변수를 만들어 사용할 수 있고, 이중 포인터 변수를 만들 수도 있다.
-매개변수로 전달할 수도 있고 구조체 변수를 반환할 수도 있다.
-메모리 동적 할당도 가능하다.
-다른 구조체 정의 시 맴버 변수로 들어갈 수도 있다.

구조체를 int와 같이 사용할 수 없는것
- int num1, num2; int num3 = num1 + num2;
- Point pt1, pt2; Point pt3 = pt1 + pt2;  // 불가능
-구조체에 대해서는 연산자의 적용이 불가능하다.


//step2 - 구조체의 기본 사용 방법
struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point pt; //구조체 타입명은 struct Point 이다.
        
    pt.x = 3;  //결국 최종 사용 단위는 맴버 변수이다.
    pt.y = 4;

}

//step2.1

struct Point
{
    int num;
    char name[20];
    double score;
};

int main()
{
    struct Point stud;

    printf("학번 이름 점수 입력:");
    scanf_s("%d %s %lf", &stud.num, stud.name, (unsigned)sizeof(stud.name), &stud.score);
    // 문자열의 버퍼의 크기나 길이는 항상 0이상의 값이기 떄문에 음수로 전달시 오류(메모리 오염, 프로그램 크래시) 발생
    // 크기이기 때문에 음수가 존재하지 않는다. > %d는 "부호 있는 정수 (signed int)" 이기 때문에 전에 공부한 포인터 부분에서 시작 주소를 %d로 출력하면 음수가 나올수 있음
    // 메모리 주소는 항상 0 이상의 값            %p는 16진수로 출력하며, 메모리 주소가 부호 없는 값으로 표현
    printf("%d\n", stud.num);
    printf("%s\n", stud.name);
    printf("%f\n", stud.score);
}

//step3 - 구조체 배열

struct Point
{
    int x;
    int y;
};

int main()
{
    srand(time(NULL));
    struct Point pt[3][4];

    for (int i =0; i<3; i++)
        for (int j = 0; j < 4; j ++ )
        {
            pt[i][j].x = rand() % 80;
            pt[i][j].y = rand() % 25;
        }
    for (int i=0; i < 3; i++)
        for (int j = 0; j < 4; j++)
        {
            printf("%d %d\n", pt[i][j].x, pt[i][j].y);
        }
}


//step4 - 구조체 포인터 

struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point* p;
    p = malloc(sizeof(struct Point));
    if (p == NULL)
        return 1;
    p->x = 3;  // -> 연산자는 포인터가 가리키는 구조체의 맴버에 접근할 때 사용된다.
    p->y = 4;  //(*p) = ->p

    printf("%d %d\n", p->x, p->y);
    free(p);

    p = malloc(sizeof(struct Point) * 5);
    if (p == NULL)
        return 1;

    for (int i = 0; i < 5; i++)
    {
        p[i].x = i;
        p[i].y = i;
        printf("%d %d\n", p[i].x, p[i].y);
    }
    free(p);
}


//step5 - typedef의 사용 방법, 함수와 구조체 

struct Point
{
    int x;
    int y;
};
typedef struct Point Point; //struct Point와 Point는 동일한 타입이다.

Point sum(Point pt1, Point pt2)
{
    Point pt3 = { pt1.x + pt2.x,pt1.y + pt2.y };
    return pt3;
}

int main()
{
    Point pt1 = { 1,1 };
    Point pt2 = { 2,2 };
    Point pt3 = sum(pt1, pt2);

    printf("%d %d", pt3.x, pt3.y);
}

//step6 - 중첩 구조체

struct Point
{
    int x;
    int y;
};
//중첩 구조체는 새로운 구조체를 선언할 때 기존 구조체 변수를 맴버 변수로 사용 > 자기 자신의 맴버 변수로 사용 x
struct Circle
{
    struct Point center;
    double radious;
};
int main()
{
    struct Circle cir = { {2,3}, 3.0 };

    printf("%d %d %f\n", cir.center.x, cir.center.y, cir.radious);
    
    cir.center.x = 300;
    cir.center.y = 400;
    cir.radious = 5.6;

    printf("%d %d %f", cir.center.x, cir.center.y, cir.radious);
}


//step6 - 자기 참조 구조체
//구조체 Point 변수를 구조체 Point의 맴버 변수로 선언할 수는 없지만 Point * 변수를 Point의 맴버 변수로 선언할 수 있다.

struct Point
{
    int x;
    int y;
    struct Point *p
};
 -그림으로 설명
struct Point* first;

struct Point* fist >> > int x;       →   int x;
                        int y;       ↑   int y;
                   struct Point *p ↗  struct Point *p

struct Point
{
    int x;
    int y;
    struct Point* p;
};

int main()
{
    struct Point* first;

    first = malloc(sizeof(struct Point));
    if (first == NULL)
        return 1;

    first->x = 3;
    first->y = 4;
    printf("%d %d\n", first->x, first->y);

    first->p = malloc(sizeof(struct Point));
    if (first->p == NULL)
        return 1;

    first->p->x = 30;
    first->p->y = 40;
    printf("%d %d", first->p->x, first->p->y);

    free(first->p);
    free(first);
}

//step7 - 열거형
// 열거형 정의 시 문자열 상수의 값을 저장하지 않으면 0부터 1씩 차례로 증가
enum Color
{
    RED,
    GREEN = 5,
    BLUE
};

int main()
{
    int a = RED;               
    printf("%d ", a);           // 0
    enum Color color = GREEN;
    printf("%d ", color);       // 5
    color++;  
    printf("%d ", color);       // 6
    printf("%d ", ++color);     // 7
}
*/