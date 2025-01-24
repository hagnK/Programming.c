/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//step1 - ����ü�� �ʿ伺

����ü�� int�� ���� Ÿ��(�ڷ���)�� ���� ����� ���̴�
struct Point
{
    int x;
    int y;
};

� Ÿ���̵� ������� ���� Ÿ���� �������� �� �� �ִ�.
�� ����ü�� ���ο� Ÿ���� ����� ���̴�.

����ü�� int�� ���� ����ϸ� �ȴ�.
-������ ���� �� �ְ�, ���� ���� �� �ʱ�ȭ�� �����ϴ�.
-1���� �迭�� ����� ����� �� �ְ�, 2���� �迭 �� ������ �迭�� ���� �� �ִ�.
-���� ������ ���Ե� �ȴ�.
-������ ������ ����� ����� �� �ְ�, ���� ������ ������ ���� ���� �ִ�.
-�Ű������� ������ ���� �ְ� ����ü ������ ��ȯ�� ���� �ִ�.
-�޸� ���� �Ҵ絵 �����ϴ�.
-�ٸ� ����ü ���� �� �ɹ� ������ �� ���� �ִ�.

����ü�� int�� ���� ����� �� ���°�
- int num1, num2; int num3 = num1 + num2;
- Point pt1, pt2; Point pt3 = pt1 + pt2;  // �Ұ���
-����ü�� ���ؼ��� �������� ������ �Ұ����ϴ�.


//step2 - ����ü�� �⺻ ��� ���
struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point pt; //����ü Ÿ�Ը��� struct Point �̴�.
        
    pt.x = 3;  //�ᱹ ���� ��� ������ �ɹ� �����̴�.
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

    printf("�й� �̸� ���� �Է�:");
    scanf_s("%d %s %lf", &stud.num, stud.name, (unsigned)sizeof(stud.name), &stud.score);
    // ���ڿ��� ������ ũ�⳪ ���̴� �׻� 0�̻��� ���̱� ������ ������ ���޽� ����(�޸� ����, ���α׷� ũ����) �߻�
    // ũ���̱� ������ ������ �������� �ʴ´�. > %d�� "��ȣ �ִ� ���� (signed int)" �̱� ������ ���� ������ ������ �κп��� ���� �ּҸ� %d�� ����ϸ� ������ ���ü� ����
    // �޸� �ּҴ� �׻� 0 �̻��� ��            %p�� 16������ ����ϸ�, �޸� �ּҰ� ��ȣ ���� ������ ǥ��
    printf("%d\n", stud.num);
    printf("%s\n", stud.name);
    printf("%f\n", stud.score);
}

//step3 - ����ü �迭

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


//step4 - ����ü ������ 

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
    p->x = 3;  // -> �����ڴ� �����Ͱ� ����Ű�� ����ü�� �ɹ��� ������ �� ���ȴ�.
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


//step5 - typedef�� ��� ���, �Լ��� ����ü 

struct Point
{
    int x;
    int y;
};
typedef struct Point Point; //struct Point�� Point�� ������ Ÿ���̴�.

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

//step6 - ��ø ����ü

struct Point
{
    int x;
    int y;
};
//��ø ����ü�� ���ο� ����ü�� ������ �� ���� ����ü ������ �ɹ� ������ ��� > �ڱ� �ڽ��� �ɹ� ������ ��� x
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


//step6 - �ڱ� ���� ����ü
//����ü Point ������ ����ü Point�� �ɹ� ������ ������ ���� ������ Point * ������ Point�� �ɹ� ������ ������ �� �ִ�.

struct Point
{
    int x;
    int y;
    struct Point *p
};
 -�׸����� ����
struct Point* first;

struct Point* fist >> > int x;       ��   int x;
                        int y;       ��   int y;
                   struct Point *p ��  struct Point *p

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

//step7 - ������
// ������ ���� �� ���ڿ� ����� ���� �������� ������ 0���� 1�� ���ʷ� ����
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