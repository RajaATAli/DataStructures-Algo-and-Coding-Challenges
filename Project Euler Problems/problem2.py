a=1
b=2
c=0
lis=[]
while a<=4000000:
    if a%2==0:
        lis.append(a)
    c=a+b
    a=b
    b=c
print(lis)
print(sum(lis))