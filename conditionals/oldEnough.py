age = int(input("how old are you?:\n"))


if age >= 18:
    print("you are old enough to vote!\n")
elif age >= 16:
    print("you are old enough to drive!\n")
elif age >= 15:
    print("you are old enough to have a leaners permit!\n")
elif age > 4:
    print("you are old enough to go to school!")
else:
    print("you are not old enought to do anything!")