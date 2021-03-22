# a="Naveen"[::-1]
# print(a)

#using slice syntax
def rev(str):
    str=str[::-1]
    return str
s="Naveen"
print(rev(s))
# # using loop
# def reverse(str):
#     str1=""
#     for i in str:
#         str1=i+str1
#     return str1
# str="Naveen"
# print(reverse(str))

#using while loop
str="Naveen"
reverse_str=""
count=len(str)
while count>0:
    reverse_str += str[count-1]
    count=count-1
print(reverse_str)
