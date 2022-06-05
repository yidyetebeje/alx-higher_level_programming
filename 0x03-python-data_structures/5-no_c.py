#!/usr/bin/python3
def no_c(my_string):
    arr_str = list(my_string)
    for i in range(0, len(my_string)):
        if my_string[i] == 'c' or my_string[i] == 'C':
            del arr_str[i]
    new_str = ''.join([str(item) for item in arr_str])
    return new_str
