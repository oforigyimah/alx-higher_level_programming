#!/usr/bin/python3
def remove_char_at(str, n):
    new = []
    for c in str:
        if len(str) < n or n < 0:
            return str
        if l != str[n]:
            new.append(c)
    return "".join(new)
