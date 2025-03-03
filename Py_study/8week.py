"""실습 1
import random

print(random.random())
print(random.uniform(10,20))
print(random.randrange(10,20))
print(random.choice([1,2,3,4,5]))
list_shuffle = [1,2,3,4,5]
random.shuffle(list_shuffle)
print(list_shuffle)
print(random.sample([1,2,3,4,5],k=2))"""

"""실습 2
import sys

print(sys.argv)
print("---")
print(sys.getwindowsversion())
print("---")
print(sys.copyright)
print("---")
print(sys.version)

sys.exit()"""

"""실습 3
import os

print("현제 운영체제",os.name)
print("현재 폴더",os.getcwd())
print("현재 폴더 내부의 요소소",os.listdir)
print("---")
os.mkdir("Hello")
os.rmdir("Hello")

with open("original.txt", "w") as file:
    file.write("Hello")
os.rename("original.txt", "new.txt")

os. remove("new.txt")

os.system("dir")"""

"""실습 4
9import datetime

now = datetime.datetime.now()
output_a =  now.strftime("%Y.%m.%d %H:%M:%S")
output_b = "{}년 {}월 {}일 {}시 {}분 {}초".format(now.year,\
    now.month,\
    now.day,\
    now.hour,\
    now.minute,\
    now.second)
output_c = now.strftime("%Y{} %m{} %d{} %H{} %M{} %S{}").format(*"년월일시분초")

print(output_a)
print(output_b)
print(output_c)"""

