a = int(input())
b = int(input())
def check(a,b):
    if a == b:
        return('equal')
    if a > b:
        return('a > b')    
    else :
        return('a < b')  
print(check(a,b))         