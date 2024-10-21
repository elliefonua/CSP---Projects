
def user_inputs(type):
    return float(input(f"Monthly {type}"))

def divide(type, income):
    return type/ income *100

    

income = user_inputs("what is your monthly income?:\n")
rent = user_inputs("what is your monthly rent?:\n")
utilities = user_inputs("what is your monthly cost for utilities?:\n")
groceries = user_inputs("what is your monthly cost for groceries?:\n")
transportation = user_inputs("what is your monthly cost for transportation?:\n")
savings = income*0.2
expenses = rent + utilities + groceries + transportation
spend = income-int(expenses)-savings


def input_value(type, amount):
    val = input()

    return f"what is your monthly {type}?"


def percent(type, amount):
    per = amount/income *100

    return f"Your {type} is {per}% income."

print(f"your monthly income is {income: .2f}")
print(f"your monthly expenses is {expenses: .2f}")
print(f"your monthly savings is {savings: .2f}")
print(f"your monthly spending money is {spend: .2f}")
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", transportation))
print(percent("savings", savings))
print(percent("expenses", expenses))
