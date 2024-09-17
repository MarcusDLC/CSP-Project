
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
print(f"Your income is: $(income:.2f)")
print(f"Your expenses are: $(expenses:.2f)")
print(f"Your savings are: $(savings:.2f)")
print(f"Your total left to spend is: $(total:.2f)")
print(f"Your rent is (prent:.2f)% of your income")
print(f"Your transportation is (ptransportation:.2f)% of your income")
print(f"Your groceries are (pgroceries:.2f)% of your income")
print(f"Your utilities are (putilities:.2f)% of your income")
print(f"Your savings are (psavings:.2f)% of your income")
print(f"Your expenses are (pexpenses:.2f)% of your income")

