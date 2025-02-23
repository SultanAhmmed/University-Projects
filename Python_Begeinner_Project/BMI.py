height = float(input("Enter your height in Meter: "))
weight = float(input("Enter your weight in KG: "))
ans = round(float(weight/height**2))
if(ans < 18.5):
  print("UnderWeight")
elif 18.5 <= ans and ans < 25:
  print("Normal weight")
elif ans >= 25 and ans < 30:
  print("OverWeight")
elif ans >= 30 and ans < 35:
  print("Obese")
elif ans >= 35:
  print("Clinically obese.")
