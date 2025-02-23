print("Welcome to the tip calculator!")
bill = float(input("What was the total bill? $"))
tip = int(input("How much tip (%) would you like to give?(10,12 or 15) "))
people = int(input("How many people to split the bill? "))
tip = (((tip / 100) * bill) + bill) / people
final_amount = round(tip,2)
final_amount = "{:.2f}".format(tip)
print(f"Each person should pay: ${final_amount}")
