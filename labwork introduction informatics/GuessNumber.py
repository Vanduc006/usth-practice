import random

numbers = []
lens = 2
score = 0
for i in range(lens):
    numbers.append(random.randint(0, 9))
for n in range(len(numbers)):
    user = input('guess some number :')    
    user = int(user)
    if user in numbers:
        print('Correct')
        score = score + 1
    else :
        print('Wrong')  
print(f"Your score is {score}, the array is ")          
# print(numbers)    
# for n in range(2):
#     input = input('guess some number :')

