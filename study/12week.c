/*
#include<stdio.h>

- 2���� �迭�� Ư��

1,2 ���� �迭�� ��ҵ��� ������� �������� �޸� �� �ڸ��� ��´�
�� 2���� �迭�� �� �켱���� �ڸ���� �ȴ�. 
Ex) arr[0][1]�� �ּҴ� 1004����, arr[1][0] �ּҴ� 1016����, arr[2][0]�� �ּҴ� 1032������ �ȴ�.

- 2���� �迭�� �������� ����

2���� �迭�� �̸��� ù ��° ����� �ּҰ��� �ǹ��Ѵ�. ��, 1���� �迭������ �ǹ̿� ���� 
��, 2���� �迭���� ù ��° ��Ҷ� ù ��° 1���� �迭�� �ǹ�
Ex) int arr[3][4];���� ù ��° ��Ҵ� ù ��° 1���� �迭(int [4])�̴�.
    1���� �迭(int [4])�� �ּҴ� int[4]�� �ּ��̸�, �ش� �ּ��� Ÿ���� int(*)[4]�� �ȴ�.

    int arr[3][4]; int (*p)[4]=ary; // int(*p)[4]=&ary[0];�� ����

2���� �迭 int ary[3][4]���� ary[0], ary[1], ary[2]�� ���� 1���� �迭(int [4])�� �ǹ��Ѵ�
-int ary[3][4]; int *p = ary[1];  //p�� ary�� �� ��° 1���� �迭�� ù ��° ��� 

�� �� ������ https://www.youtube.com/watch?v=zzlCG5DEp3o&t=513s ���� ������ ���� 



//step1 - �Լ��� ���ڷ� 2���� �迭 �����ϱ� 

int sum(int (*p)[4], int count)
{
    int result = 0;
    for(int i=0; i<count; i++)
        for (int j = 0; j < 4; j++)
        {
            result += p[i][j];
        }
    return result;
}

int main()
{
    //int arr[2][4]���� �迭 �̸� ary�� Ÿ���� int(*)[4]�̴�
    int arr[2][4] = {{1,4,3,6},{8,4,2,6}};

    int result = sum(arr, 2);
    printf("%d", result);
}

//step1.1
int sum(int *p, int row, int col)
{
    int result = 0;
    for (int i = 0; i < row * col;i++)
    {
        result += p[i];
    }
    return result;
}

int main()
{
    int arr[3][6] = { {1,2,3,4,5,6},{1,2,3,4,5,6}, {1,2,3,4,5,6} };

    int result = sum((int *)arr,3,6); //(int *)arr�� 2���� �迭�� 1���� �迭�� ĳ�����ϴ� ǥ��
    printf("%d", result);
}
*/
