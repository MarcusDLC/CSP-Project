
def dollars(type):
    return("How much is your {type}? ")



print("This is going to calculate your budget for you")
income = float(dollars("income"))


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
    per = amount/income*100
    
    return (f"Your {type} is {amount}% of your income.")

print(f"Your income is: ${income:.2f}")
print(f"Your expenses are: ${expenses:.2f}")
print(f"Your savings are: ${savings:.2f}")
print(f"Your total left to spend is: ${total:.2f}")

print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", transportation))
print(percent("savings", savings))
print(percent("expenses", expenses))

income = float(dollars("income",income))
rent = float(dollars("rent", rent))
groceries = float(dollars("rent", rent))
utilities = float(input("How much is utilities? "))
transportation = float(input("How much is transportation? "))
rent = float(input("How much is rent? "))
