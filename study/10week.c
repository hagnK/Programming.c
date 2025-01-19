/*
#include<stdio.h>

// 출력할 때 *p[i] or p[i] 인지 헷갈렸을 때 포인터 변수가 주소 연산자를 받을 때의 포인터 변수 형태를 봐라 

// step1 - 포인터와 1차원 배열의 관계 

int main()
{
	// int arr[5];의 첫 번재 요소의 시작 주소가 1000번지라면 두 번째 요소의 시작 주소는 1004번지이다 > 배열 요소들은 순서대로 연속적인 메모리 상에 자리를 차지한다.
	// 배열 이름은 처 번째 요소(arr[0])의 주소값을 의미한다.

	int arr[5] = { 1,2,3,4,5 };
	int* p = arr; // int *p = &arr[0]; 과 동일 

	for (int i = 0; i < 5; i ++)
	{
		
		printf("%d ", p[i]); // 배열 이름이 포인터와 동일한 기능을 하듯이, 포인터 변수 또한 배열처럼 사용, 
		                     // *p = p[0], p[1] = *(p+1)
		//printf("%d ", *p);
		//p++;
	}

}

// step2 - 포인터 배열 : 포인터 변수를 요소로 갖는 배열

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* p[5];

	for (int i = 0; i < 5; i++)
	{
		p[i] = &arr[i]; // *p[i]는 역참조 변수 p가 가리키는 값이 와야함으로 애초에 성립불가 > p[i]와야 됨 
		printf("%d ", *p[i]);
	}
	
}


// step3 - 함수의 인자로 배열 전달하기 

int sum(int *p,int count)
{
	int result = 0;
	for (int i = 0; i < count; i++)
		result += p[i];  // *p = p[0], p[1] = *(p+1)
	return result;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int result = sum(arr,sizeof(arr)/sizeof(int));
	printf("%d", result);
}


// step4 - 참조에 의한 전달 
// 매개변수 전달 방식에는 값에 의한 전달(call by value)과 참조에 의한 전달(call by reference)가 있다.
// call by value - 형식매개변수로 실매개변수의 값을 전달 > 형식매개변수의 값을 변경해도 실매개변수의 값은 변경되지 않는다
// call by reference - 실매개변수의 주소값을 전달하며 형식매개변수로는 포인터 변수를 사용한다. 포인터 변수를 통해 실매개변수의 값을 변경할 수 있다.

int swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}

int main()
{
	int num1 = 2, num2 = 3;
	swap(&num1, &num2);
	printf("%d %d", num1, num2);
}
*/