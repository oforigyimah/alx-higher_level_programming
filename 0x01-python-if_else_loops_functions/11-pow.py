#!/usr/bin/python3
def pow(a, b):
    ans = 1
    if b < 0:
        for j in range(abs(b)):
            ans *= 1 / a
    for i in range(b):
        ans *= a
    return ans
