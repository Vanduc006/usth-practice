user = str(input())
print(len(user))
print(user.upper())
print(user.lower())
array = list(user)
print(array[1])

# line = 'Kong Panda ddddd'
# index = line.find('Panda')
# print(index)
# output_line = line[:index] + 'Fu ' + line[index:]
# print(output_line)

index = 1
res = user[:index] + 'IN' + user[index:]
print(res)