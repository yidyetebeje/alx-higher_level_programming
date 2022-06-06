#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    ln = len(my_list)
    bool_list = [True for i in range(ln)]
    for i in range(ln):
        if my_list[i] % 2 != 0:
            bool_list[i] = False
    return bool_list
