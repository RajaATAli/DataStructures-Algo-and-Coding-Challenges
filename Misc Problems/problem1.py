#bmi calculator

def fun(name, weight, height):
    bmi=weight/(height**2)
    if bmi<25:
        return name+", you are not overweight with a bmi of=",bmi
    else:
        return name+", you are overweight with a bmi of=",bmi
n=input('what name?')
w=int(input('what weight?'))
h=int(input('what height?'))

print(fun(n,w,h))


#mile to km
def finc(mile):
    return 1.6*mile

a=int(input("which value of mile would u like to convert to km="))
print("This is in km=",finc(a))