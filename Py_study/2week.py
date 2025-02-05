'''실습 1
format_a = "{}만 원".format(5000)
format_b = "파이썬 열공하여 첫 연봉 {}만 원 만들기".format(5000)
format_c = "{} {} {}".format(3000, 4000, 5000)
format_d = "{} {} {}".format(1, "문자열", True)

print(format_a)
print(format_b)
print(format_c)
print(format_d)'''

'''실습 2
output_a = "{:d}".format(52)
output_b = "{:5d}".format(52)
output_c = "{:10d}".format(52)
output_d = "{:05d}".format(52)
output_e = "{:05d}".format(-52)

print(output_a)
print(output_b)
print(output_c)
print(output_d)
print(output_e)'''

'''실습 3
output_a = "{:+d}".format((+52))
output_b = "{:+d}".format((-52))
output_c = "{: d}".format((52))
output_d = "{: d}".format((-52))
output_e = "{:d}".format((-52))

print(output_a)
print(output_b)
print(output_c)
print(output_d)
print(output_e)'''

'''실습 4
output_a = "{:+5d}".format(52)
output_b = "{:+5d}".format(-52)
output_c = "{:=+5d}".format(52)
output_d = "{:=+5d}".format(-52)
output_e = "{:+05d}".format(52)
output_f = "{:+05d}".format(-52)

print(output_a)
print(output_b)
print(output_c)
print(output_d)
print(output_e)
print(output_f)'''

'''실습 5
output_a = "{:f}".format(52.273000)
output_b = "{:15f}".format(52.273000)
output_c = "{:+15f}".format(52.273000)
output_d = "{:+015f}".format(52.273000)
output_e = "{:=+15f}".format(52.273000)

print(output_a)
print(output_b)
print(output_c)
print(output_d)
print(output_e)'''

'''실습 6
output_a = "{:15.3f}".format(52.273000)
output_b = "{:15.2f}".format(5.2730000)
output_c = "{:15.1f}".format(52.273000)
output_d = "{:=+015.2f}".format(-52.273000)

print(output_a)
print(output_b)
print(output_c)
print(output_d)'''

'''실습 7
output_a = 52.0
output_d = "{:g}".format(output_a)

print(output_a)
print(output_d)'''

'''도전문제 1 > 구의 부피와 겉넓이
pi = 3.141592
r = int(input("구의 반지름을 입력해주세요: "))

volume = 4/3*pi*(r**3)
surface_area = 4*pi*(r**2)

print("= 구의 부피는 ",volume,"입니다.")
print("= 구의 겉넓이는 ",surface_area,"입니다.")
'''

'''도전문제 2
base = float(input("밑변의 길이를 입력해주세요: "))
height = float(input("높이의 길이를 입력해주세요: "))

hypotenuse = (base**2 + height**2)**(1/2)

print("= 빗 변의 길이는",hypotenuse,"입니다.")'''

'''실습 8
x = 10
under_20 = x < 20

print("under_20:", under_20)
print("under_20:", not under_20)'''

"""실습 9
number = int(input("정수 입력: "))

if(number>0):
    print("양수입니다")

elif(number == 0):
    print("0입니다")

elif(number<0):
    print("음수입니다")"""

'''실습 10
import datetime

now = datetime.datetime.now()

print(now.year, "년")
print(now.month, "월")
print(now.day, "일")
print(now.hour, "시")
print(now.minute, "분")
print(now.second, "초")'''

"""실습 11
import datetime

now = datetime.datetime.now()

print("{}년 {}월 {}일 {}시 {}분 {}초".format(
    now.year,
    now.month,
    now.hour,
    now.day,
    now.minute,
    now.second
))"""

"""실습 12
import datetime

now = datetime.datetime.now()

if now.hour < 12:
    print("현재 시각은 {}시로 오전입니다".format(now.hour))

else:
    print("현재 시각은 {}시로 오후입니다".format(now.hour))"""

"""실습 13
import datetime

now = datetime.datetime.now()

if 3 <= now.month <= 5:
    print("이번 달은 {}월로 봄입니다".format(now.month))
elif 6 <= now.month <= 8:
    print("이번 달은 {}월로 여름입니다")
elif 9 <= now.month <= 11:
    print("이번 달은 {}월로 가을입니다".format(now.month))
else:
    print("이번 달은 {}월로 겨울입니다".format(now.month))"""

"""실습 14
number = input("정수입력: ")
last_character = number[-1]
last_number = int(last_character)

if (last_number == 0 
    or last_number == 2
    or last_number == 4
    or last_number == 6
    or last_number == 8):
    print("짝수입니다")
else:
    print("홀수입니다")"""

"""실습 15
number = input("정수입력: ")
last_character = number[-1]

if last_character in "02468":
    print("짝수입니다")
else:
    print("홀수입니다")"""

"""실습 16
number = int(input("정수입력: "))

if number%2 == 0:
    print("짝수입니다")
else:
    print("홀수입니다")"""

"""실습 17
score = float(input("학점 입력: "))

if score == 4.5:
    print("신")
elif score >= 4.2:
    print("교수님의 사랑")
elif score >= 3.5:
    print("현 체제의 수호자")
elif score >= 2.8:
    print("일반인")
elif score >= 2.3:
    print("일탈을 꿈꾸는 소시민")
elif score >= 1.7:
    print("오락문화의 선구자")
elif score >= 1.0:
    print("불가촉천민")
elif score >= 0.5:
    print("지벌레")
elif score > 0:
    print("플랑크톤")
else:
    print("시대를 앞서가는 혁명의 씨앗")"""

"""실습 18
print("# if 조건문에 0 넣기")

if 0.0:
    print("0은 True로 변환됩니다")
else:
    print("0은 False로 변환됩니다 \n")

print("# if 조건문에 빈 문자열 넣기")

if "":
    print("빈 문자열은 True로 변환됩니다")
else:
    print("빈 문자열은 False로 변환됩니다")"""

"""실습 19
number = int(input("정수 입력: "))

if number >0:
    pass
else:
    raise NotImplementedError """

""" 도전문제 3
import datetime

now = datetime.datetime.now()
comment = input("입력: ")

if comment in "안녕하세요":
    print("안녕하세요.")
elif comment in "지금 몇 시야?" or comment in "지금 몇 시예요?":
    print("지금은 {}시입니다.".format(now.hour))
else:
    print(comment)"""

"""도전문제 4
number = int(input("정수 입력: "))

if number%2 == 0:
    print(f'{number}은 2로 나누어 떨어지는 숫자입니다.')
else:
    print(f'{number}은 2로 나누어 떨어지는 숫자가 아닙니다.')
if number%3 ==0:
    print(f'{number}은 3로 나누어 떨어지는 숫자입니다.')
else:
    print(f'{number}은 3로 나누어 떨어지는 숫자가 아닙니다.')
if number%4 ==0:
    print(f'{number}은 4로 나누어 떨어지는 숫자입니다.')
else:
    print(f'{number}은 4로 나누어 떨어지는 숫자가 아닙니다.')
if number%5 ==0:
    print(f'{number}은 5로 나누어 떨어지는 숫자입니다.')
else:
    print(f'{number}은 5로 나누어 떨어지는 숫자가 아닙니다.')"""