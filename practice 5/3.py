import sys
user = input('number :')
user = int(user)

if user > 0:
    for i in range(1,user):
        user = user * i
    print(user)    
if user < 0 :
    sys.exit()  
if user == 0 :
    print('1')          
   