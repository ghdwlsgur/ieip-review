a = sum = 0
# 0 1 2 3 4 5 6 7 8 9
while a < 10:
    a += 1  # 1 2 3 4 5 6 7 8 9 10
    if a % 2 == 1:
        continue
    sum += a  # 2 + 4 + 6 + 8 + 10 = 30
print(sum)
