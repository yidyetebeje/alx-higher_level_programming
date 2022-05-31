#!/usr/bin/python3
def print_last_digit(number):
    ld = abs(number) % 10
    if number < 0:
        ld = -ld
    return ld