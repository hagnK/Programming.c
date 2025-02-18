"""실습 1
file = open("basic.txt", "w")
file.write("Hello Python Programming..!")

file.close"""

"""실습 2
with open("basic.txt", "w") as file:
    file.write("Hello Python Programming")"""

"""실습 3
with open("basic.txt", "r") as file:
    contents = file.read()
print(contents)"""

"""실습 4
import random

hanguls = list("가나다라마바사아자차카타파하")
with open("info.txt","w") as file:
    for i in range(1000):
        name = random.choice(hanguls)
        weight = random.randrange(40,100)
        height = random.randrange(140,200)
        file.write("{}, {}, {}\n".format(name, weight, height))"""

"""실습 5
with open("info.txt", "r") as file:
    for line in file:
        (name, weight, height) = line.strip().split(",")
    
        if (not name) or (not weight) or (not height):
            continue
        bmi = int(weight) /((int(height) / 100) **2)
        result = ""
        if 25 < bmi:
            result = "과체중"
        elif 18.5 < bmi:
            result = "정상 체중"
        else:
            result = "저체중"
        
        print('\n'.join([
            "이름: {}",
            "몸무게: {}",
            "키: {}",
            "BMI: {}",
            "결과: {}"
        ]).format(name, weight, height, bmi, result))
        print()"""

"""실습 6
books = [{
    "제목": "혼자 공부하는 파이썬",
    "가격": 18000
},{
    "제목": "혼자 공부하는 머신러닝 + 딥러닝",
    "가격": 26000
},{
    "제목": "혼자 공부하는 자바스크립트",
    "가격": 24000
}]

def output_rise(book):
    return book["가격"]             # 함수 X 
print(min(books, key=output_rise))  # print(min(books, key=lambda book: book["가격"]))   
print(max(books, key=output_rise))  # print(max(books, key=lambda book: book["가격"]))"""

"""실습 7
books = [{
    "제목": "혼자 공부하는 파이썬",
    "가격": 18000
},{
    "제목": "혼자 공부하는 머신러닝 + 딥러닝",
    "가격": 26000
},{
    "제목": "혼자 공부하는 자바스크립트",
    "가격": 24000
}]

books.sort(key=lambda book: book["가격"])
for book in books:
    print(book)"""

"""확인 문제 1
numbers = list(range(1, 10 + 1))
print(numbers)

print("#홀수만 추출하기")
print(list(filter(lambda x: x%2 ==1, numbers)))
print()

print(list(filter(lambda x: x>=3 and x <7, numbers)))
print()

print("# 제곱해서 50 미만 출력하기")
print(list(filter(lambda x: x*x < 50, numbers)))"""

"""중요 1
people = 6
counter = 0

def fun(a, b):
    if a == 0:
        global counter
        counter += 1
    for i in range(max(2, b),a+1):
        fun(a - i, i)
    

fun(people, 0)
print(counter)"""

""" 중요 2
people = 6
memo = {}

def fun(nord, num):
    if (nord, num) in memo:
        return memo[(nord, num)]
    result = 0
    if nord == 0:
        result += 1
    else:
        for i in range(max(2, num),min(nord,10)+1):
            result += fun(nord - i, i)
    memo[(nord, num)] = result
    return result
print(fun(people, 0))
print(memo)"""


"""중요 3
count = int(input("입력> "))
def tower(count, first, end, middle):
    if count == 1:
        print(first, ">" , end)
    else:
        tower(count-1,first, middle,end)
        print(first, ">", end)
        tower(count-1, middle, end, first)

tower(count,"A","B","C")"""


"""복습
num = int(input("원판 개수 입력 >"))

def tower(count, first, end, middle):
    if count == 1:
        print(first, ">", end)
    else:
        tower(count -1, first, middle, end)
        print(first, ">", end)
        tower(count -1, middle, end, first)

tower(num, "A", "B", "C")
print((2**num)-1)"""

"""복슥 2
people = 6
memo = {}

def fun(nord, sit):
    if (nord, sit) in memo:
        return memo[(nord, sit)]
    result = 0
    if nord == 0:
        result += 1
    else:
        for i in range(max(2, sit), min(nord, 10)+1):
            result += fun(nord -i, i)
    memo[(nord, sit)] = result
    return result

print(fun(people, 0))
print(memo)"""