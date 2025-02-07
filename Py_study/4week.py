'''실습 1
for i in range(5):
    print(str(i), "= 반복 변수")
print()
for i in range(5, 10):
    print(str(i), "=반복 변수")
print()
for i in range(0, 10, 3):
    print(str(i), "=반복 변수")'''

'''실습 2
ary = [13, 2, 45,234]

for i in range(len(ary)):
    print("{}번째 반복: {}".format(i, ary[i]))'''

"""실습 3
for i in range(4, 0-1, -1):
    print("현재 반복 변수: {}".format(i))
print()
for i in reversed(range(5)):
    print("현재 반복 변수: {}".format(i))"""
  
"""실습 4
i = 0
while i<10:
    print("{}번째 반복입니다.".format(i))
    i += 1"""

"""실습 5
list_test = [1,2,1,2]
value = 2

while value in list_test:
    list_test.remove(value)
print(list_test)"""

'''실습 6
import time

number = 0
target_tick = time.time() + 5

while time.time()<target_tick:
    number +=1
    print("5초 동안 {}번 반복했습니다.".format(number))'''

'''실습 7
i = 0

while True:
    print("{}번째 반복문입니다.".format(i))
    i +=1
    input_text= input("> 종료하시겠습니까?(Y/y)")
    if input_text in ["Y", "y"]:
        print("반복을 종료합니다.")
        break'''

"""실습 8
numbers = [5,15,6,20,7,25]

for number in numbers:
    if number < 10:
        continue
    print(number)"""

"""문제 1
max_value = 0
a = 0
b = 0

for i in range(100):
    j = 100 - i
    if i*j > max_value:
        max_value = i*j
        a = i
        b = j
print("최대가 되는 경우 {}*{}={}".format(a,b,max_value))"""


"""실습 9
list_a = [1,2,3,4,5]
list_reversed = reversed(list_a)

print("reversed([1,2,3,4,5]): ", list_reversed)
print("list(leversed([1,2,3,4,5])):",list(list_reversed))

print("for i in reversed([1,2,3,4,5]):")
for i in reversed(list_a):
    print("-", i)"""

"""실습 10
example_list = ["요소A", "요소B", "요소C"]

print(example_list)
print(enumerate(example_list))
print(list(enumerate(example_list)))

for i,value in enumerate(example_list):
    print("{}번째 요소는 {}입니다.".format(i,value))"""

"""실습 11
example_dic = {
    "key1" : "값1",
    "key2" : "값2",
    "key3" : "값3"
}

print(example_dic.items())

for key,value in example_dic.items():
    print("dictionary[{}] = {}".format(key, value))"""

"""실습 12
ary =[]

for i in range(0, 20, 2):
    ary.append(i*i)
print(ary)"""

"""실습 13
ary = [i*i for i in range(0,20,2)]
print(ary)

ary_fruit = ["사과", "배", "초콜릿", "키위", "바나나"]

output = [fruit for fruit in ary_fruit if fruit !="초콜릿"]
print(output)"""

"""실습 14
try:
    number = int(input("정수를 입력하세요: "))
except:
    print("문자열을 입력했습니다.")
    quit()

if number%2 ==0:
    print((
        "입력한 문자열은 {}입니다.\n"
        "{}은(는) 짝수입니다.".format(number, number)
    ))
else:
    print((
        "입력한 문자열은 {}입니다 \n"
        "{}은(는) 홀수입니다.".format(number, number)
    ))"""

"""실습 15
try:
    number = int(input("정수 입력: "))

except:
    print('정수가 아닙니다.')
    quit()
if number%2 ==0:
    print("\n".join([
        "입력한 문자열은 {}입니다.",
        "{}는(은) 짝수입니다."
    ]).format(number, number))
else:
    print("\n".join([
        "입력하 문자열은 {}입니다.",
        "{}는(은) 홀수입니다."
    ]).format(number, number))"""

"""문제 2
output = [num for num in range(1,100) if ("{:b}".format(num)).count("0") == 1]

for i in output:
    print("{} : {}".format(i, "{:b}".format(i)))
print("합계: ", sum(output))"""

"""도전문제 1 > clear
list_a = [1,2,3,4,1,2,3,1,4,1,2,3]
dict_a = {}
count = 0

for num in list_a:
    if num in dict_a:
        dict_a[num] = dict_a[num] + 1

    else:
        dict_a[num] = 1
        count +=1

print(("{}에서\n"
"사용된 숫자의 종류는 {}개입니다.\n"
"참고: {}".format(list_a, count, dict_a)))"""

"""도전 문제2 > clear
# 염기 서열 > ctacaatgtcagtatacccattgcattagccgg
dna = input("염기 서열을 입력해주세요: ")
dict_a = {
    "a" : 0,
    "t" : 0,
    "g" : 0,
    "c" : 0
}

for i in dna:
    if i in dict_a:
        dict_a[i] = dict_a[i]+1

for key, value in dict_a.items():
    print("{}의 개수: {}".format(key, value))"""

"""도전 문제3 > 답안지 참조조
# 염기 서열 > ctacaatgtcagtatacccattgcattagccgg
dna = "ctacaatgtcagtatacccattgcattagccgg"
dict_a = {}

for i in range(0, len(dna), 3):
    codon = dna[i:i+3]
    if codon in dict_a:
        dict_a[codon] = dict_a[codon] + 1
    else:
        dict_a[codon] = 1
print(dict_a)"""

"""도전 문제 4 > clear 
list_a = [1,2,[3,4],5,[6,7],[8,9]]
list_new = []

for i in range(len(list_a)):
    if type(list_a[i]) != list:
        list_new.append(list_a[i])
    else:
        list_new.append(list_a[i][0])
        list_new.append(list_a[i][1])
print(list_new)"""

"""도전 문제 4 > 더 효율적인 코드
list_a = [1,2,[3,4],5,[6,7],[8,9]]
list_new = []

for i in list_a:
    if type(i) == list:
        for j in i:
            list_new.append(j)
    else:
        list_new.append(i)
print(list_new)"""