income = float(input("how much do you make a month?:\n"))
rent = float(input("how much does your rent cost?:\n"))
utilities = float(input("what does your utilities cost?:\n"))
groceries = float(input("how much does your groceries cost?:\n"))
trasnportation = float(input("how much does your trasportation cost:\n"))
savings = income*0.2
expenses= rent + utilities + groceries + trasnportation
spending = income-expenses-savings

def input(type, amount):
    var = type
    
    return f"what is your monthly {type}?", amount

print("you make", income)
print("your rent is", rent)
print("your utilities are", utilities)
print("your groceries are", groceries)
print("your transportation is", trasnportation)
print("your savings are", savings)
print("your expenses are", expenses)
print("your spending money is", spending)

def percent(type, amount):
    per = amount/income *100

    return f"Your {type} is {per}% income."

print("your expenses are", expenses)
print("your rent is", rent)
print("your utilities are", utilities)
print("your groceries are", groceries)
print("your trasnportation cost is", trasnportation)
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", trasnportation))
print(percent("savings", savings))
print(percent("expenses", expenses))