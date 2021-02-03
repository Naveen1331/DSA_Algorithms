#Method1
num = -1
if num<=0:
    print("Number is not a prime Number")
else:
    for i in range(2,num):
        if num % i==0:
            print("Number is not a Prime Number")
            break
    else:
            print("Number is prime Number")


#find all the prime numbers in the given range
start=int(input("Enter the start Nubmer"))
end = int(input("Enter the end Number"))
for i in range(2,end+1):
    flag=0
    for j in range(2,i):
        if(i%j==0):
            flag=1
            break
    if(flag==0):
        print(i,end='')