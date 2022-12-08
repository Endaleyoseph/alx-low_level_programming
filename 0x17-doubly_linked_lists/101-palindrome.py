#!/usr/bin/python3

def pal_check(mul):
    return str(mul) == str(mul)[::-1]

def biggest_pal():
    biggest = 0
    for i in range(999, 100, -1):
        for j in range(999, 100, -1):
            mul = i * j
            if pal_check(mul):
                if mul > biggest:
                    biggest = mul
    return biggest

print(biggest_pal())
