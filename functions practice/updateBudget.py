

print("This is going to calculate your budget for you")
income = float(input("How much do you make a month? "))
groceries = float(input("How much is groceries? "))
utilities = float(input("How much is utilities? "))
transportation = float(input("How much is transportation? "))
rent = float(input("How much is rent? "))

expenses = rent + utilities + groceries + transportation
savings = income * .2
total = income - expenses - savings
prent = (rent / income)* 100
putilities = (utilities / income)* 100
pgroceries = (groceries / income)* 100
ptransportation = (transportation / income)* 100
pexpenses = (expenses / income)* 100
psavings = (savings / income)* 100

def percent(type, amount):
    per = amount/income

print(f"Your income is: ${income:.2f}")
print(f"Your expenses are: ${expenses:.2f}")
print(f"Your savings are: ${savings:.2f}")
print(f"Your total left to spend is: ${total:.2f}")
print(f"Your rent is {int(prent)}% of your income\n")
print(f"Your transportation is {int(ptransportation)}%  of your income")
print(f"Your groceries are {int(pgroceries)}% of your income")
print(f"Your utilities are {int(putilities)}% of your income")
print(f"Your savings are {int(psavings)}% of your income")
print(f"Your expenses are {int(pexpenses)}% of your income")
