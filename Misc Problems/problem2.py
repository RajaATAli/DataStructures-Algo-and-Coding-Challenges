import random
def computer_guess(num):
    low=1
    count=1
    high=num
    n=int(input("Please think of a number for the computer to guess between 0 and "+ str(num)))
    guess=random.randint(low,high)
    while guess!=n:
        #if low!=high:
           # guess=random.randint(low,high)
        #else:
            #guess=low #could be high bce low=high
        if guess>n:
            print("sorry computer the number you guessed "+str(guess)+" is too high")
            high=guess-1 #to reduce the number of counts
        elif guess<n:
            print("sorry computer the number you guessed " +str(guess)+ " is too low")
            low=guess+1 #to reduce the number of counts
        guess=random.randint(low,high)
        count+=1
    
    print("correct guess of the number "+str(guess))
    print("The computer guessed a total of " +str(count)+ " times")
computer_guess(1)