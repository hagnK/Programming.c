"""실습 1
list_a = [1,2,3]
list_b = [4,5,6]

print("# 리스트")
print("list_a =", list_a)
print("list_b =", list_b)

print("\n# 리스트 기본 연산자")
print("list_a + list_b =", list_a + list_b)
print("list_a * 3 =", list_a*3)

print("\n# 길이 구하기")
print("len(list_a) =", len(list_a))"""

"""실습 2
list_a = [1,2,3]

print("# 리스트 뒤에 요소 추가하기")
list_a.append(4)
list_a.append(5)

print(list_a)
print()

print("# 리스트 중간에 요소 추가하기")
list_a.insert(0,10)
print(list_a)"""

"""실습 3
list_a = [1,2,3]
print(list_a)
print()

list_a.extend([1,2])
list_a.extend([[4,5],[6,7]])
print(list_a)
print(list_a[5][1])"""

"""실슴 4
list_a = [1,2,3]
list_b = [4,5,6]

print(list_a + list_b)
print(list_a)
print(list_b)

list_a.extend(list_b)

print(list_a)
print(list_b)"""

"""실습 5
list_a = [1,2,3,4,5]
list_b =[1,2,3,4,5]
del list_a[1]
print("del list_a[1]",list_a)

list_a.pop(2)
print("pip(2)",list_a)

del list_b[:3]
print(list_b)"""

"""실습 6
list_a = [1,2,1,2]

print(list_a)
list_a.remove(2)
print(list_a)

list_a.extend([[1,2]])
print(list_a)
list_a.remove([1,2])
print(list_a)"""

"""실습 7
list_a = [1,2,3,4,5]
list_b = [6,7,8,9]

print(list_a,"\n",list_b)

del list_a[:]
list_b.clear()

print(list_a,"\n", list_b)"""

"""실습 8
list_a = [19,25,6,10,53,14,3]
print(list_a)

list_a.sort()
print(list_a)

list_a.sort(reverse=True)
print(list_a)"""

"""실습 9 
ary = [1,2,3,4,5]
for element in ary:
    print(element)

for character in "안녕하세요":
    print("-", character)"""

"""실습 10
list_of_list = [
    [1,2,3],
    [4,5,6,7],
    [8,9]
]
print(list_of_list)

for items in list_of_list:
    for item in items:
        print(items)"""

"""실습 11
dict_a = {
    "name" : "hangk",
    "age" : "23"
}
print(dict_a)"""

"""실습 12
dict_a ={
    "name" : "7D 건조 망고",
    "type" : "당절임",
    "ingredient" : ['망고', '설탕', '메타중아황산나트륨', '치자황색소'],
    "origin" : "필리핀"
}

print("name :", dict_a["name"])
print("type :", dict_a["type"])
print("ingredient :", dict_a["ingredient"])
print("origin :", dict_a["origin"])

dict_a["name"] = '8D 건조 망고'
print("name :", dict_a['name'])

dict_a["price"] = 5000
print(dict_a)

del dict_a["origin"]
print(dict_a)"""

""""실습 13
dict_a = {
    "name" : "7D 건조 망고",
    "type" : "당절임",
    "ingredient" : ["망고", "설탕", "메타중아황산나트륨", "치자황색소"],
    "origin" : "필리핀"
}

# 키가 존재하는지 확인하는 방법 1
key = input("입력하세요 :")

if key in dict_a:
    print(dict_a[key])
else:
    print("존재하지 않는 키에 접근하고 있습니다")

value = dict_a.get("type")
print("값:", value)

if value == None:
    print("존재하지 않는 키에 접근했었습니다.")"""

"""실습 14
dict_a = {
    "name" : "7D 건조 망고",
    "type" : "당절임",
    "ingredient" : ["망고", "설탕", "메타중아황산나트륨", "치자황색소"],
    "origin" : "필리핀"
}

for key in dict_a:
    print(key, ":", dict_a[key])"""

"""문제 1 
character = {
    "name" : "기사",
    "level" : 12,
    "items" : {
        "sword" : "불꽃의 검",
        "armor" : "풀플레이드"
    },
    "skill" : ["베기", "세게 배기", "아주 세게 베기"]
}

for key in character:
    if type(character[key]) is dict:
        for item in character[key]:
            print(item, ":", character[key][item])
    elif type(character[key]) is list:
        for items in character[key]:
            print(key, ":", items)
    else:
        print(key, ":", character[key])"""

"""문제 1에 대한 처음 짜여진 코드 > 확실히 위쪽이 유지보수 및 효율적임 (답안 참조 )
for key in character:
    if key == "name" or key =="level":
        print(key ,":",character[key])

    elif key == "items":
        print(key, ":", character[key]["sword"])
        print(key, ":", character[key]["armor"])
    else:
        print(key, ":", character[key][0])
        print(key, ":", character[key][1])
        print(key, ":", character[key][2])
"""