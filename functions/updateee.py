
def user_inputs(type):
    return float(input(f"Monthly {type}"))

def divide(type, income):
    return type/ income *100

income = user_inputs("what is your monthly income?: \n")
rent = user_inputs("what is your monthly rent?: \n")
utilities = user_inputs("what is your monthly cost for utilities?: \n")
groceries = user_inputs("what is your monthly cost for groceries?: \n")
transportation = user_inputs("what is your monthly cost for transportation?: \n")

savings = income*0.2
expenses = rent + utilities + groceries + transportation
spend = income-int(expenses)-savings

def percent(type, amount):
    per = amount / income * 100    

    print(f"Your {type} is {per}% income")

print(percent("rent percentage", rent))
print(percent("utilities percentage", utilities))
print(percent("groceries percentage", groceries))
print(percent("transportation percentage", transportation))
print(percent("expenses percentage", expenses))
print(percent("spending percentage", spend))
