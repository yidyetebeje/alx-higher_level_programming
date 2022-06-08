#!/usr/bin/python3
def only_diff_elements(set_1, set_2):
    jnt = set_1 & set_2
    un = set_1 | set_2
    od_set = un - jnt
    return od_set
