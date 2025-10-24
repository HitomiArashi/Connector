import random

result_number = int(input('Nhập số của bạn (từ 1 đến 100):'))

while result_number > 100 or result_number < 1:

    print("Giá trị không hợp lệ! Vui lòng nhập lại!")

    result_number = int(input('Nhập số của bạn (từ 1 đến 100):'))

guess_number = random.randint(1,100)

while guess_number != result_number:

    print("Số tôi đưa ra là:", guess_number)

    print("Số này là kết quả sai!")

    guess_number = random.randint(1,100)

print("Số tôi đưa ra là:", guess_number)

print("Tôi đã tìm thấy kết quả chính xác là", guess_number)

