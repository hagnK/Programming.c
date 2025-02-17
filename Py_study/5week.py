"""실습 1
def print3_times():
    print("hellow")
    print("hellow")
    print("hellow")
print3_times()"""

"""실습 2 
def printn_times(value, n):
    for i in range(n):
        print(value)
printn_times("Hellow", 5)"""

"""실습 3
def print_n_times(n, *values):
    for i in range(n):
        for value in values:
            print(value)
        print()
print_n_times(5, "안녕하세요", "Hellow", "hi")"""


"""실습 4
def print_n_times(*values, n=2):
    for i in range(n):
        for value in values:
            print(value)

print_n_times("Hellow", "LOLLLL", 3)"""

"""실습 5
def print_n_times(*values, n=2):
    for i in range(n):
        for value in values:
            print(value)

print_n_times("안녕하세요", "즐거운", "파이썬 프로그래밍", n=3)"""

"""실습 6
def test(a, b =10, c = 100):
    print(a,b,c)
test(10, 20 ,30)
test(a=10, b=100, c=200)
test(c=10, a=100, b=200)
test(10, c=200)"""

"""실습 7
def return_test():
    print("A입니다")
    return
    print("B입니다")

return_test()"""

"""실습 8
def return_num():
    return 100

def return_none():
    return

value = return_num()
value_none = return_none()
print(value, value_none)"""

"""실습 9
def sum_all(start, end):
    output = 0
    for i in range(start, end+1):
        output+=i
    return output

print("0 to 100:",sum_all(0,100))
print("0 to 1000:",sum_all(0,1000))
print("50 to 1000:",sum_all(0,1000))"""

"""실습 10
def sum_all(start=0, end=100, step =1):
    output = 0
    for i in range(start, end+1, step):
        output +=i
    return output

print("A.",sum_all(0, 100, 10))
print("B.",sum_all(end=50))
print("C.",sum_all(start = 50, step = 5))"""

"""실습 11
def fac(start=10, end=0, step=-1):
    sum = 1
    for i in range(start,end,step):
        sum *=i
    return sum

print(fac(start=5, end =0, step=-1))"""

"""실습 12
def fac(n):
    if n == 0:
        return 1
    else:
        return n * fac(n-1)
print(fac(5))"""

"""실습 13
def fib(n):
    if n == 1 or n ==2:
        return 1
    else:
        return fib(n-1) + fib(n-2)
print(fib(35))"""

"""실습 14
counter = 0

def fib(n):
    print("fibonacci({})를 구합니다.".format(n))
    global counter
    counter += 1
    if n == 1:
        return 1
    if n == 2:
        return 1
    else:
        return fib(n-1) + fib(n-2)
fib(10)
print("fibonacci(10) 계산에 활용된 덧셈 횟수는 {}번입니다.".format(counter))"""

"""실습 15
dic = {
    1 : 2,
    2 : 1
}

def fibonacci(n):
    if n in dic:
        return dic[n]
    else:
        output = fibonacci(n-1) + fibonacci(n-2)
        dic[n] = output
        return output

print(fibonacci(10))"""

"""실습 16
def flatten(data):
    output = []
    for item in data:
        if type(item) == list:
            output += flatten(item)
        else:
            output.append(item)
    return output

example = [1,[2,3],[[4,5,6]],7]
print("원본", example)
print("평탄화", flatten(example))"""

"""실습 17
[a, b] = [1, 2]
(c, d) = (3, 4)

print(a, b, c, d)

tuple_test = 10, 20, 30, 40
print("#괄호가 없는 튜플의 값과 자료형 출력")
print("tuple_test:", tuple_test)
print("type(tuple_test):", type(tuple_test))
print()

e,f,c = 10, 20, 30
print("# 괄호가 없는 튜플을 활용한 할당")
print(e)
print(f)
print(c)"""

"""실습 18
a,b = 10, 20
print(a, b)
print("교환")
a,b = b,a
print(a,b)

def test():
    return (40,50)
c,d = test()
print(c,d)"""

"""실습 19
def call_10_test(func):
    for i in range(10):
        func()

def Hello_test():
    print("Hello")
call_10_test(Hello_test)"""

"""실습 20
def power(item):
    return item * item
def under_3(item):
    return item < 3

list_input = [1,2,3,4,5]

output_a = map(power, list_input)
print(output_a)
print(list(output_a))
print()

output_b = filter(under_3,list_input)
print(output_b)
print(list(output_b))"""

"""실습 21
power = lambda x: x*x
under_3 = lambda x: x < 3

list_input = [1,2,3,4,5]

output_a = map(power, list_input)
print(output_a)
print(list(output_a))
print()

output_b = filter(under_3,list_input)
print(output_b)
print(list(output_b))"""

"""실습 21-1 
list_input = [1,2,3,4,5]

output_a = map(lambda x: x*x, list_input)
output_b = filter(lambda x: x<3, list_input)

print(output_a)
print(list(output_a))
print(output_b)
print(list(output_b))"""

