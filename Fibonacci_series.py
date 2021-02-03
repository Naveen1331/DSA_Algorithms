#Method1
def fib(n):
    a=0
    b=1
    if n==1:
        print(a)
    else:
        print(a)
        print(b)
        for i in range(2,n):
            c=a+b
            a=b
            b=c
            print(c)
fib(1)

#Method2
n=int(input("Enter the Number:"))
first=0
second=1
for i in range(n):
    print(first)
    temp=first
    first=second
    second=temp+second





