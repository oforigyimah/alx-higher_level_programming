#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = number % 10 if number > 0 else -(abs(number) % 10)
str = f"Last digit of {number} is {last_digit} and is "
if last_digit > 5:
    str = str + "greater than 5"
elif last_digit == 0:
    str = str + "0"
elif last_digit < 6 and not 0:
    str = str + "less than 6 and not 0"
print(str)
