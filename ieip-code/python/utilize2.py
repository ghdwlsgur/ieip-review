a = {'apple', 'lemon', 'banana'}
a.update({'kiwi', 'banana'})  # 'apple', 'lemon', 'banana', 'kiwi'>
a.remove('lemon')  # 'apple', 'banana', 'kiwi'
a.add('apple')  # 'apple', 'banana', 'kiwi'
for i in a:
    print(i)
