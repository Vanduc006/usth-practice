# num = [0,1,2,3,4,5,6,7,8,9]
# char = ['zero','one','two','three','four','five','six','seven','eight','nine']
# # user = int(input())

# user = 423
# print(list(str(user)))
# for i in range(len(num)):
#     for n in range(user):
#         print(str(user[n]))
#         if str(num[i]) in str(user):
#             print(i)
    
# print(num % 100)


# print(num / 1000)
import inflect
p = inflect.engine()
print(p.number_to_words(423))