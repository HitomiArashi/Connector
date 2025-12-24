#Bài 1
input_degree = float(input('Nhập nhiệt độ C:'))

out = input_degree + 273.15

print("Nhiệt độ K tương ứng là: ", out)

#Bài 2
m = int(input('Nhập số m: '))
n = int(input('Nhập số n: '))

division = m // n
remain = m % n

print("Phần nguyên của m chia cho n là ", division)
print("Phần dư của m chia cho n là: ", remain)

#Bài 3
import math

radius = float(input('Nhập bán kính: '))

area = round(math.pi * radius ** 2, 3)

print ("Diện tích hình tròn có bán kính đã cho là: ", area)

#Bài 4
import math

h = float(input('Nhập độ cao của vật rơi: '))

v = round(math.sqrt(2 * 9.8 * h), 2)

print ("Vận tốc của vật khi rơi ở độ cao h là: ", v)

#Bài 5
a = float(input("Nhập độ dài đáy lớn: "))
b = float(input("Nhập độ dài đáy bé: "))
h = float(input("Nhập chiều cao: "))

area = round((b + (a - b)) * h, 3)

print ("Diện tích hình thang là: ", area)

#Bài 6
import math

a = float(input("Nhập độ dài cạnh a: "))
b = float(input("Nhập độ dài cạnh b: "))
c = float(input("Nhập độ dài cạnh c: "))

C = round(a + b + c, 2)
S = round(math.sqrt(C / 2 * math.sqrt(C / 2 - a) * math.sqrt(C / 2 - b) * math.sqrt(C / 2 - c)), 2)

print("Chu vi tam giác đã cho là: ", C)
print("Chu vi diện tích tam giác đã cho là: ", S)

#Bài 7
import math

x = float(input("Nhập x: "))
y = float(input("Nhập y: "))

res = (math.sin(x)) / (((2 * x + y) / math.cos(x)) - (x ** y) / (x - y))

print("Kết quả biểu thức đã cho là: ", res)

#Bài 8
n = int(input("Nhập số n: "))

if n % 2 == 0:
    print("Số n đã nhập là số chẵn.")
else:
    print("Số n đã nhập là số lẻ.")

#Bài 9
year = int(input("Nhập năm: "))

if year % 400 == 0 or year % 4 == 0 and year % 100 != 0:
    print("Năm nhập vào là năm nhuận.")
else:
    print("Năm nhập vào không phải năm nhuận.")

#Bài 10
mark = float(input("Nhập điểm: "))

if mark >= 8:
    print("Học lực Giỏi.")
elif mark < 8 and mark >= 6.5:
    print("Học lực Khá")
elif mark < 6.5 and mark >= 5:
    print("Học lực Trung bình.")
elif mark < 5 and mark >= 3.5:
    print("Học lực Yếu")
elif mark < 3.5:
    print("Học lực Kém")

#Bài 11
a = float(input("Nhập số a: "))
b = float(input("Nhập số b: "))

if a == 0:
    if b == 0:
        print("Phương trình có vô số nghiệm.")
    else:
        print("Phương trình vô nghiệm.")
else:
    print("Nghiệm của phương trình là: ", - (b / a))

#Bài 15
n = int(input("Nhập số n: "))
res = 0

for i in range(n):
    res = res + i + 1

print("Tổng từ 1 đến n là: ", res)

#Bài 16
n = int(input("Nhập số n: "))
res = 0

for i in range(1, n, 2):
    res = res + i ** 2

print("Tổng bình phương các số lẻ từ 1 đến n là: ", res)

#Bài 17
def UCLN(a, b):
    if b == 0:
        return a
    else:
        return UCLN(b, a % b)

def BCNN(a, b):
    return abs(a * b) // UCLN(a, b)

a = int(input("Nhập số a: "))
b = int(input("Nhập số b: "))

print("UCLN của a và b là: ", UCLN(a, b))
print("BCNN của a và b là: ", BCNN(a, b))

#Bài 18
def tong_uoc(n):
    res = 0
    for i in range(1, n, 1):
        if n % i == 0:
            res = res + i
    return res

n = int(input("Nhập số n: "))
if tong_uoc(n) == n:
    print("n là số hoàn hảo.")
else:
    print("n không phải là số hoàn hảo.")

#Bài 19
import math

def kiem_tra_nguyen_to(n):
    if n <= 1:
        return False
    elif n < 4:
        return True
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True

n = int(input("Nhập số n: "))
count = 0
for i in range(n):
    if kiem_tra_nguyen_to(n) == True:
        count += 1

print("Số lượng số nguyên tố bé hơn n là: ", count)

#Bài 20
n = int(input("Nhập số n: "))
i = 2
while n > 1:
    count = 0
    while n % i == 0:
        n /= i
        count += 1
    if count != 0:
        print(i, count)
    i += 1
