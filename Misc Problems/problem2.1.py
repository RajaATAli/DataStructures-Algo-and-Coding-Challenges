import random
import time
def computer_guess(num):
    low=0
    high=num
    res=''
    print(f"Take time to guess the number between {low} and {high}in your head")
    time.sleep(5)
    while res!='c':
        guess=random.randint(low,high)
        res=input(f"Is {guess} the correct number=")
        if res=='l':
            print("the number you guessed is too low")
            low=guess+1
        elif res=='h':
            print("the number you guessed is too high")
            high=guess-1
    print("you guessed the correct number")
computer_guess(10)