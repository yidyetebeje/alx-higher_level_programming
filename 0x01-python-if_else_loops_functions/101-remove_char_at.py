#!/usr/bin/python3
def remove_char_at(str, n):
    strcp = ""
    if(n < 0):
        return str
    for i in range(0, len(str)):
        if(i != n):
            strcp = strcp + str[i]
    return strcp
