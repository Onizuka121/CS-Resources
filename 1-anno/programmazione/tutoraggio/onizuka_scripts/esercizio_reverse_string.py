#! /usr/bin/python3

def reverse_string(stringa,i=0):
    if i == 0:
        stringa = list(stringa)
        stringa.append(' ')

    if i == (len(stringa)//2):
        del(stringa[0])
        return ''.join(stringa)
    else:
        last = (len(stringa)-1) - i
        tmp = stringa[last]
        stringa[last] = stringa[i]
        stringa[i] = tmp
        stringa = reverse_string(stringa,i+1)
        return ''.join(stringa)


print(reverse_string('ciao'))
