import sys
user = input('number > 0 :')
n = 0
if int(user) < 0 :
    print('Incorrect number')
    sys.exit()
else :
    print(n)
    for i in range (0, int(user)):
        n = n + 1
        if n > int(user):
            break
        print(n)
        

    