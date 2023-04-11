sum=0
list=[]
for i in range(0,1000):
    if i%3==0 or i%5==0:
        list.append(i)
        sum=sum+i
print(list)
print(sum)
        