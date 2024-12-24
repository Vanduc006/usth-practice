a = input()
b = input()
c = input()
def IsTriangle(a, b, c):  
    if (a + b <= c) or (a + c <= b) or (b + c <= a) : 
        return False
    else: 
        return True
if IsTriangle(a,b,c):
    print('It is triangle')   
else:
    print('It not Triangle ')    