#! /usr/bin/python3


'''
Scrivere una funzione in Python che, data una lista composta da interi e sottoliste annidate (composte da interi e altre sottoliste), restituisce in output la somma di tutti gli interi.

'''


def sum_list(lista,i=0,sum=0):
    if i >= len(lista):
        return sum  

    if type(lista[i]) == list:
        sum = sum_list(lista[i],0,sum)
    else:
        sum += lista[i]
    
    return sum_list(lista,i+1,sum)

print(sum_list([0,2,3,4,5,6,7,8,9]))


