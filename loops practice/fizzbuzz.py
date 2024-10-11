#Counts to 50
i = 0
while i<50:
    i += 1
#Divisible Fizzbuzz
    if i%3==0 and i%5==0:
        print("Fizzbuzz!")
#Divisble Fizz
    elif i%3==0:
        print("Fizz!")
#Divisible Buzz
    elif i%5==0:
        print("Buzz!")
#Prints all numbers after
    else:
        print (i)