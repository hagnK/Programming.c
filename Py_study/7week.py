"""실습 1
try:
    input_num  = input("입력> ")
    int(input_num)

    print(input_num)
except:
    print("정수를 입력하세요.")
else:
    print("예외가 발생하지 않았습니다.")
finally:
    print("프로그램이 끝났습니다")"""

"""실습 2
list_number = [1,2,3,4,5]

try:
    number_num = int(input("입력> "))
    print("{}번째 요소{}".format(number_num, list_number[number_num]))
except Exception as exception:
    print("type(except):", type(exception))
    print("exception:", exception)"""

"""실습 3
list_number = [1,2,3,4,5]

try:
    number_num = int(input("입력> "))
    print("{}번째 요소 {}".format(number_num, list_number[number_num]))
except ValueError:
    print("정수를 입력해 주세요")
except IndexError:
    print("인덱스 범위를 벗어났어요")"""

"""실습 4
list_number = [1,2,3,4,5]

try:
    input_num = int(input("입력> "))
    print(f"{input_num}번째 요소 {list_number[input_num]}")
except ValueError as exception:
    print("정수를 입력하세요")
    print("exception:",exception)
except IndexError as exception:
    print("인덱스 범위를 벗어났습니다")
    print("exception:", exception)"""


"""실습 5
list_num = [1,2,3,4,5]

try:
    input_num = int(input("입력> "))
    print(f"{input_num}번째 요소 {list_num[input_num]}")
except ValueError as exception:
    print("정수를 입력해주세요")
    print(type(exception), exception)

except IndexError as exception:
    print("인덱스 범위를 벗어 났습니다")
    print(type(exception), exception)
except Exception as exception:
    print("파악하지 못한 예외가 발생했습니다")
    print(type(exception), exception)"""