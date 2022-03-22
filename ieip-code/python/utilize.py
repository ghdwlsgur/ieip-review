x = input("test: ")  # xyz321
a = ['abc123', 'def456', 'ghi789']
a.append(x)  # ['abc123', 'def456', 'ghi789', 'xyz321']
a.remove('def456')  # ['abc123', 'ghi789', 'xyz321']
# 'ghi789'
# -6 -5 -4 -3 -2 -1
# 789

# 'xyz321'
# -6 -5 -4 -3 -2 -1
# xyz
print(a[1][-3:], a[2][:-3], sep=',')
