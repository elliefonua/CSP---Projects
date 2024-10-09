income = float(input("how much do you make a month?:\n"))
rent = float(input("how much does your rent cost?:\n"))
utilities = float(input("what does your utilities cost?:\n"))
groceries = float(input("how much does your groceries cost?:\n"))
trasnportation = float(input("how much does your trasportation cost:\n"))
savings = income*0.2
expenses= rent + utilities + groceries + trasnportation
spending = income-expenses-savings

def input_value(type, amount):
    val = input()

    return f"what is your monthly {type}?"


def percent(type, amount):
    per = amount/income *100

    return f"Your {type} is {per}% income."

print(f"your monthly income is {income: .2f}")
print(f"your monthly expenses is {expenses: .2f}")
print(f"your monthly savings is {savings: .2f}")
print(f"your monthly spending money is {spending: .2f}")
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", trasnportation))
print(percent("savings", savings))
print(percent("expenses", expenses))