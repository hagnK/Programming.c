/*
#include<stdio.h>

- 2차원 배열의 특성

1,2 차원 배열의 요소들은 순서대로 연속적인 메모리 상에 자리를 잡는다
단 2차원 배열은 행 우선으로 자리잡게 된다. 
Ex) arr[0][1]의 주소는 1004번지, arr[1][0] 주소는 1016번지, arr[2][0]의 주소는 1032번지가 된다.

- 2차원 배열과 포인터의 관계

2차원 배열의 이름은 첫 번째 요소의 주소값을 의미한다. 즉, 1차원 배열에서의 의미와 동일 
단, 2차원 배열에서 첫 번째 요소란 첫 번째 1차원 배열을 의미
Ex) int arr[3][4];에서 첫 번째 요소는 첫 번째 1차원 배열(int [4])이다.
    1차원 배열(int [4])의 주소는 int[4]의 주소이며, 해당 주소의 타입은 int(*)[4]가 된다.

    int arr[3][4]; int (*p)[4]=ary; // int(*p)[4]=&ary[0];과 동일

2차원 배열 int ary[3][4]에서 ary[0], ary[1], ary[2]는 각각 1차원 배열(int [4])을 의미한다
-int ary[3][4]; int *p = ary[1];  //p는 ary의 두 번째 1차원 배열의 첫 번째 요소 

그 후 내용은 https://www.youtube.com/watch?v=zzlCG5DEp3o&t=513s 통해 내용을 이해 



//step1 - 함수의 인자로 2차원 배열 전달하기 

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
    //int arr[2][4]에서 배열 이름 ary의 타입은 int(*)[4]이다
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

    int result = sum((int *)arr,3,6); //(int *)arr는 2차원 배열을 1차원 배열로 캐스팅하는 표현
    printf("%d", result);
}
*/
