import random

result_number = random.randint(1,100)

print("Máy tính đã có được số cần tìm. Mời bạn đoán số mà máy tính đang giữ!")

guess_number = int(input('Số bạn đoán là (1 đến 100): '))

while guess_number != result_number:

    if guess_number < 1 or guess_number > 100:

        print("CẢNH BÁO! BẠN ĐÃ VƯỢT NGOÀI PHẠM VI SỐ CHO PHÉP ĐOÁN! NHẬP LẠI!")

    elif guess_number < result_number:

        print("Số bạn đoán bé hơn số máy tính đưa ra! Mời bạn đoán lại!")

    elif guess_number > result_number:

        print("Số bạn đoán lớn hơn số máy tính đưa ra! Mời bạn đoán lại!")

    guess_number = int(input('Số bạn đoán là (1 đến 100): '))

print("Chúc mừng bạn đã tìm ra số mà máy tính đang giữ!")